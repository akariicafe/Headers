@interface BCCryptor : NSObject

+ (void)publicKeyFromData:(id)a0 completion:(id /* block */)a1;
+ (void)encryptData:(id)a0 key:(id)a1 completion:(id /* block */)a2;

@end
