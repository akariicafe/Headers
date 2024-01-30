@class NSString;

@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol>

@property struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *full_key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generate;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithKey:(struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)a0;
- (id)signData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)keychainData;
- (void)dealloc;
- (id)keyAgreement:(id)a0 error:(id *)a1;

@end
