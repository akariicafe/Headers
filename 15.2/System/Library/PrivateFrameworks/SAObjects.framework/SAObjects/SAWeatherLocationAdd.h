@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;

+ (id)locationAdd;
+ (id)locationAddWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
