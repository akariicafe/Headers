@class SFCredentialProviderExtensionState, NSString, NSDate;

@interface SFPasswordCredentialIdentity : NSObject <SFSafariPasswordCredential, NSSecureCoding, NSCopying> {
    NSString *_domainWithoutWWWDot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long rowIdentifier;
@property (retain, nonatomic) SFCredentialProviderExtensionState *owningExtensionState;
@property (readonly, nonatomic) long long serviceIdentifierType;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *externalRecordIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) long long rank;
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareForQuickTypeBar:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5 owningExtensionState:(id)a6;
- (id)_domainWithoutWWWDot;
- (id)initWithServiceIdentifier:(id)a0 serviceIdentifierType:(long long)a1 externalRecordIdentifier:(id)a2 user:(id)a3 rank:(long long)a4;

@end
