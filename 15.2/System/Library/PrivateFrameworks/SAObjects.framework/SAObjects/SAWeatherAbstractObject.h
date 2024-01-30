@class SAWeatherCurrentConditions, SAWeatherAirQualityObject, NSArray, NSString, SAWeatherUnits, SAWeatherLocation;

@interface SAWeatherAbstractObject : SADomainObject

@property (retain, nonatomic) SAWeatherAirQualityObject *airQuality;
@property (retain, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (copy, nonatomic) NSString *extendedForecastUrl;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) SAWeatherUnits *units;
@property (retain, nonatomic) SAWeatherLocation *weatherLocation;
@property (copy, nonatomic) NSString *weatherRequest;

+ (id)abstractObject;
+ (id)abstractObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
