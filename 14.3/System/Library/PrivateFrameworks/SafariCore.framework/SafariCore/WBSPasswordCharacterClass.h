@class NSString;

@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)unicodeCharacterClass;
+ (id)namedCharacterClassWithType:(long long)a0;
+ (id)customCharacterClassWithValue:(id)a0;
+ (id)asciiPrintableCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)digitCharacterClass;
+ (id)specialCharacterClass;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
