@interface DESecurityUtils : NSObject

+ (id)randomDataOfLength:(unsigned long long)a0;
+ (id)getRandomKey;
+ (id)getKeyFromData:(id)a0;
+ (id)getRandomIV;
+ (id)sign:(id)a0 privateKey:(id)a1;
+ (BOOL)verify:(id)a0 expected:(id)a1 publicKey:(id)a2;

@end
