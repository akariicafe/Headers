@interface CFSecurityUtils : NSObject

+ (id)randomDataOfLength:(unsigned long long)a0;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (BOOL)verifyScriptData:(id)a0 hmac:(id)a1 hmacKey:(id)a2 iv:(id)a3;
+ (id)decryptData:(id)a0 withKey:(id)a1 iv:(id)a2 salt:(id)a3;
+ (id)_dataForOperation:(unsigned int)a0 withInputData:(id)a1 key:(id)a2 iv:(id)a3;
+ (id)deriveKeyForPassword:(id)a0 withSalt:(id)a1;
+ (id)encryptData:(id)a0 withKey:(id)a1 iv:(id)a2;
+ (id)encryptData:(id)a0 withPassword:(id)a1 iv:(id *)a2 salt:(id *)a3;
+ (id)decryptData:(id)a0 withPassword:(id)a1 iv:(id)a2 salt:(id)a3;
+ (id)deriveKeyForSaltedKey:(id)a0 withSalt:(id)a1;
+ (id)deriveConsistentKeyForPassword:(id)a0;

@end
