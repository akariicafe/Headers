@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload

@property (retain, nonatomic) NSData *attestation;

+ (id)sealedAuthInfoResultWithPayload:(id)a0 signature:(id)a1;
+ (id)authInfoResultWithAttestation:(id)a0;

- (void).cxx_destruct;
- (id)generatePayload;

@end
