@class NSData, NSString, NSArray;

@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSData *userIdentifier;
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSArray *supportedAlgorithmIdentifiers;
@property (nonatomic) BOOL shouldRequireResidentKey;
@property (copy, nonatomic) NSArray *excludedCredentials;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
