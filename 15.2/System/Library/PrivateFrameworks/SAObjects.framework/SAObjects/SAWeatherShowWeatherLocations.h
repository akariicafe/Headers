@interface SAWeatherShowWeatherLocations : SADomainCommand

+ (id)showWeatherLocations;
+ (id)showWeatherLocationsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
