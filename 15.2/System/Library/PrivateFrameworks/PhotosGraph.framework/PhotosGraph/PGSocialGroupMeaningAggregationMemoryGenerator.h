@interface PGSocialGroupMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator

+ (id)supportedMeaningLabels;
+ (id)requiredFeatureRelation;

- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;

@end
