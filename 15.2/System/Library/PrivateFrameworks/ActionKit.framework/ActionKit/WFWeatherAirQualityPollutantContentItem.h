@interface WFWeatherAirQualityPollutantContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;

- (id)localizedDescription;
- (id)localizedName;
- (id)concentration;
- (id)pollutant;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)formattedConcentration;

@end
