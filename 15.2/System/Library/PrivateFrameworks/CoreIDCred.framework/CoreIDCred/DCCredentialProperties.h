@class NSString, DCCredentialOptions, NSDictionary, NSDate;

@interface DCCredentialProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *credentialIdentifier;
@property (retain) NSString *partition;
@property unsigned long long credentialState;
@property (retain) DCCredentialOptions *options;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *updatedAt;
@property (retain) NSDate *payloadValidFrom;
@property (retain) NSDate *payloadValidUntil;
@property (retain) NSDictionary *keySigningKeys;
@property (retain) NSDictionary *deviceEncryptionKeys;
@property (retain) NSDictionary *presentmentKeys;
@property BOOL hasUsablePresentmentAuthPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
