@interface ICCipherV2 : NSObject

+ (long long)ICCryptoWrappedKeyLengthV2;
+ (id)concatenateCipherData:(id)a0 initializationVector:(id)a1 tag:(id)a2;
+ (void)getParsedCipherData:(id *)a0 initializationVector:(id *)a1 tag:(id *)a2 fromData:(id)a3;
+ (id)ic_decrypt:(id)a0 withCipherKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)ic_encrypt:(id)a0 withCipherKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)ic_unwrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)ic_wrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
