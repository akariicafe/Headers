@class NSString;

@interface SAWeatherLocation : SALocation

@property (copy, nonatomic) NSString *locationId;

+ (id)location;
+ (id)locationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
