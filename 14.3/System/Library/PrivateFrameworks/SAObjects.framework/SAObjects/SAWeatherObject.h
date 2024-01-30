@class NSString;

@interface SAWeatherObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)objectWithDictionary:(id)a0 context:(id)a1;
+ (id)object;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
