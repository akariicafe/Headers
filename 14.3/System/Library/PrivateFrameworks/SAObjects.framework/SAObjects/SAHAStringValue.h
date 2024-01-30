@class NSString;

@interface SAHAStringValue : SAHAAttributeValue

@property (copy, nonatomic) NSString *value;

+ (id)stringValueWithDictionary:(id)a0 context:(id)a1;
+ (id)stringValue;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
