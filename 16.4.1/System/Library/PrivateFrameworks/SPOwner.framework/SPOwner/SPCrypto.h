@interface SPCrypto : NSObject

+ (id)antiTrackingKeyFromSharedSecretKey:(id)a0;
+ (id)compactKey:(id)a0;
+ (id)deriveKeyWithKeyData:(id)a0 sharedData:(id)a1 keyLength:(unsigned long long)a2;
+ (id)deriveWithPublicKey:(id)a0 sharedSecretKey:(id *)a1;
+ (struct _CCECCryptor { } *)diversifyKey:(id)a0 entropyData:(id)a1;
+ (id)exportKey:(struct _CCECCryptor { } *)a0 toFormat:(unsigned int)a1;
+ (void)generateTokensWithPublicKey:(id)a0 sharedSecretKey:(id)a1 initialRatchetsToSkip:(unsigned long long)a2 ratchetStep:(id /* block */)a3;
+ (struct _CCECCryptor { } *)importKey:(id)a0 fromFormat:(unsigned int)a1;
+ (id)ratchetSharedSecretKey:(id)a0 ratchetCount:(unsigned long long)a1;

@end
