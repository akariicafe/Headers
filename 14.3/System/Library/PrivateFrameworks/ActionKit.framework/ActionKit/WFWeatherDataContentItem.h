@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)humidity;
- (id)windDirection;
- (id)windSpeed;
- (id)temperature;
- (id)pollutants;
- (id)localizedAirQualityCategory;
- (id)visibility;
- (id)pressure;
- (id)highTemperature;
- (id)lowTemperature;
- (id)sunsetTime;
- (id)date;
- (id)location;
- (id)sunriseTime;
- (id)localizedAirQualityIndex;
- (id)uvIndex;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)localizedConditionString;
- (id)feelsLikeTemperature;
- (id)dewpoint;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)weatherData;

@end
