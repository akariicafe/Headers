@interface WFWeatherAirQualityPollutantContentItem : WFContentItem

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

- (id)localizedDescription;
- (id)localizedName;
- (id)concentration;
- (id)pollutant;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)formattedConcentration;

@end
