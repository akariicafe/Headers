@interface JXURLEncoding : NSObject

+ (id)encodedString:(id)a0;
+ (id)formEncodedString:(id)a0;
+ (id)encodedDictionary:(id)a0;
+ (id)formEncodedDictionary:(id)a0;
+ (void)encodeObject:(id)a0 withKey:(id)a1 andSubKey:(id)a2 intoArray:(id)a3;

@end
