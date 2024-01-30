@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload

@property (retain, nonatomic) NSData *attestation;
@property (retain, nonatomic) NSData *cert;
@property (nonatomic) long long type;
@property (nonatomic) long long error;

+ (id)authInfoResultWithAttestation:(id)a0;
+ (id)authInfoResultWithAttestation:(id)a0 certificate:(id)a1 type:(long long)a2 error:(long long)a3;
+ (id)sealedAuthInfoResultWithPayload:(id)a0 signature:(id)a1;

- (void).cxx_destruct;
- (id)generatePayload;

@end
