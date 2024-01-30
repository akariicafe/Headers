@class NSData, NSString;

@interface DCCredentialTrust : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *credentialBAACertificate;
@property (readonly) NSData *credentialKeyBlob;
@property (readonly) NSString *credentialPairingID;
@property (readonly, nonatomic) BOOL credentialAccessibilityEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCredentialKeyBlob:(id)a0 baaCertificate:(id)a1 pairingID:(id)a2 isAccessibilityEnabled:(BOOL)a3;

@end
