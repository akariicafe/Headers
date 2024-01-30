@class NSData, NSString, NSArray;

@interface AKFidoContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *challenge;
@property (readonly, nonatomic) NSString *originalChallenge;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) NSData *userIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *credentialName;
@property (readonly, nonatomic) NSArray *credentials;
@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptHeader;
@property (copy, nonatomic) NSString *promptBody;
@property (copy, nonatomic) NSString *incorrectKeyPresentedMessage;
@property (nonatomic) BOOL useAlternativeKeysIcon;

- (void)encodeWithCoder:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithChallenge:(id)a0 relyingPartyIdentifier:(id)a1 userIdentifier:(id)a2 displayName:(id)a3 credentialName:(id)a4 credentials:(id)a5;
- (id)initWithChallengeString:(id)a0 relyingPartyIdentifier:(id)a1 userIdentifierString:(id)a2 displayName:(id)a3 credentialName:(id)a4 credentials:(id)a5;

@end
