@interface PallasResponseVerifier : NSObject

@property (readonly) struct __SecKey { } *leafPublicKey;
@property (readonly) double issuanceDate;
@property (readonly) const struct __CFString { } *keyAlg;

- (BOOL)verifyResponse:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)verifyCerts:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)determineAlg:(id)a0;

@end
