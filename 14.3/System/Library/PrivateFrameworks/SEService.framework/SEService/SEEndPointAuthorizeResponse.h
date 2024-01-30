@class NSData;

@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *endPointAttestationData;
@property (retain, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) NSData *encryptionPublicKeyData;

+ (id)responseWithEndPointAttestationData:(id)a0 encryptionPublicKeyData:(id)a1 encryptedData:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
