@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)visibility;
- (id)temperature;
- (id)date;
- (id)uvIndex;
- (id)pressure;
- (id)location;
- (id)localizedAirQualityIndex;
- (id)pollutants;
- (id)localizedAirQualityCategory;
- (id)windSpeed;
- (id)highTemperature;
- (id)lowTemperature;
- (id)windDirection;
- (id)sunsetTime;
- (id)humidity;
- (id)sunriseTime;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)feelsLikeTemperature;
- (id)localizedConditionString;
- (id)dewpoint;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)weatherData;

@end
