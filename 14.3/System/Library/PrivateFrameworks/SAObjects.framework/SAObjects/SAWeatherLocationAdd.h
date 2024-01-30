@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;

+ (id)locationAdd;
+ (id)locationAddWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
