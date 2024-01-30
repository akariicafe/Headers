@class SAWeatherLocation;

@interface SAWeatherLocationDelete : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;

+ (id)locationDelete;
+ (id)locationDeleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
