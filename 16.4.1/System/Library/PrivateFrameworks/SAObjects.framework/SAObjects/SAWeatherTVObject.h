@class NSString;

@interface SAWeatherTVObject : SAWeatherAbstractObject

@property (copy, nonatomic) NSString *view;

+ (id)tVObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)tVObject;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
