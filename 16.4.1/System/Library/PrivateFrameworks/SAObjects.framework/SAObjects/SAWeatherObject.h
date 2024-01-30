@class NSString;

@interface SAWeatherObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
