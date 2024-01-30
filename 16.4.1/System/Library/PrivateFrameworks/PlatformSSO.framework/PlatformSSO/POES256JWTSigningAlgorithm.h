@class NSString;

@interface POES256JWTSigningAlgorithm : NSObject <POJWTSigningAlgorithm>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)signData:(id)a0 usingKey:(struct __SecKey { } *)a1;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingCertificateString:(id)a2;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingKey:(struct __SecKey { } *)a2;

@end
