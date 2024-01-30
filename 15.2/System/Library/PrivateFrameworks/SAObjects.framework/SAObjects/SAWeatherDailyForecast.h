@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (copy, nonatomic) NSNumber *highTemperature;
@property (copy, nonatomic) NSNumber *lowTemperature;

+ (id)dailyForecast;
+ (id)dailyForecastWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
