@interface ECDKIMCryptoUtil : NSObject

+ (BOOL)verifySignedData:(id)a0 withSignatureData:(id)a1 publicKeyData:(id)a2 hashingAlgorithm:(unsigned long long)a3 error:(out id *)a4;

@end
