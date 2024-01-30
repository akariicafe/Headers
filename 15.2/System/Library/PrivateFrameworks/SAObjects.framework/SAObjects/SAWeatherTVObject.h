@class NSString;

@interface SAWeatherTVObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)tVObject;
+ (id)tVObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
