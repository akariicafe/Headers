@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *temperature;

+ (id)hourlyForecast;
+ (id)hourlyForecastWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
