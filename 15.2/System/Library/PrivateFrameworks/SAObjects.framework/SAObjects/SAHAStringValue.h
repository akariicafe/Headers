@class NSString;

@interface SAHAStringValue : SAHAAttributeValue

@property (copy, nonatomic) NSString *value;

+ (id)stringValue;
+ (id)stringValueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
