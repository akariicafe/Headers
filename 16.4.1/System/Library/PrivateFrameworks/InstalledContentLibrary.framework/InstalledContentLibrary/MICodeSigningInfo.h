@class NSString, NSNumber, NSDictionary;

@interface MICodeSigningInfo : NSObject

@property (readonly, copy, nonatomic) NSString *signerIdentity;
@property (readonly, copy, nonatomic) NSString *signerOrganization;
@property (readonly, copy, nonatomic) NSString *codeInfoIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSNumber *signatureVersion;
@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) unsigned long long codeSignerType;
@property (readonly, nonatomic) unsigned long long profileValidationType;
@property (readonly, nonatomic) unsigned long long signingInfoSource;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initForTesting;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 fromSource:(unsigned long long)a1;
- (id)initWithSignerIdentity:(id)a0 signerOrganization:(id)a1 codeInfoIdentifier:(id)a2 teamIdentifier:(id)a3 signatureVersion:(id)a4 entitlements:(id)a5 signerType:(unsigned long long)a6 profileType:(unsigned long long)a7 signingInfoSource:(unsigned long long)a8;

@end
