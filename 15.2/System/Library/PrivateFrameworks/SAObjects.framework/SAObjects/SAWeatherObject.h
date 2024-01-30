@class NSString;

@interface SAWeatherObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
