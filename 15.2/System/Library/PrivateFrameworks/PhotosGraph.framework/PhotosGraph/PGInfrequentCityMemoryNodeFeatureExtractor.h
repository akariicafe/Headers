@interface PGInfrequentCityMemoryNodeFeatureExtractor : PGGraphMemoryNodeFeatureExtractor

+ (id)unlocalizedCityNameFromCityName:(id)a0 countryCode:(id)a1 fromCityManager:(id)a2;

- (id)initWithError:(id *)a0;
- (id)labelsForVersion:(long long)a0;
- (id)initWithVersion:(long long)a0 graph:(id)a1 error:(id *)a2;
- (id)initWithFrequentCityLabels:(id)a0 version:(long long)a1 graph:(id)a2 error:(id *)a3;
- (id)initWithFrequentCityLabels:(id)a0 version:(long long)a1 graph:(id)a2 cityManager:(id)a3 error:(id *)a4;

@end
