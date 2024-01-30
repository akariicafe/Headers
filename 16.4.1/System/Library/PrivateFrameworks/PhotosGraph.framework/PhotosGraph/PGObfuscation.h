@interface PGObfuscation : NSObject

+ (id)obfuscatedStringFromPlaintextDate:(id)a0 usingDateFormatter:(id)a1;
+ (id)obfuscatedStringFromPlaintextNumber:(id)a0;
+ (id)obfuscatedStringFromPlaintextString:(id)a0;
+ (id)plaintextDateFromObfuscatedString:(id)a0 usingDateFormatter:(id)a1;
+ (id)plaintextNumberFromObfuscatedString:(id)a0;
+ (id)plaintextStringFromObfuscatedString:(id)a0;

@end
