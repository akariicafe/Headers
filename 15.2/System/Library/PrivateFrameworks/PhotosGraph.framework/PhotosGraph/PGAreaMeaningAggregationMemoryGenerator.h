@interface PGAreaMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator

+ (id)supportedMeaningLabels;
+ (id)requiredFeatureRelation;

- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;

@end
