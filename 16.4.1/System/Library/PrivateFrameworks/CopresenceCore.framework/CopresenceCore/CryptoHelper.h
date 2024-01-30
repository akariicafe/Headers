@interface CryptoHelper : NSObject {
    unsigned char _chacha_key[32];
    unsigned char _chacha_nonce[12];
}

+ (id)decryptAES:(id)a0;
+ (id)encryptAES:(id)a0;

- (id)decrypt:(id)a0;
- (id)encrypt:(id)a0;
- (id)initWithKey:(id)a0 nonce:(id)a1;

@end
