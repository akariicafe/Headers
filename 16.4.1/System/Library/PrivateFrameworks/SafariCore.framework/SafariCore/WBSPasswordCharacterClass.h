@class NSString;

@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)asciiPrintableCharacterClass;
+ (id)customCharacterClassWithValue:(id)a0;
+ (id)digitCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)namedCharacterClassWithType:(long long)a0;
+ (id)specialCharacterClass;
+ (id)unicodeCharacterClass;
+ (id)uppercaseCharacterClass;

- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
