@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic) long long value;

+ (id)integerValue;
+ (id)integerValueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
