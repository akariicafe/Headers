@interface PGPublicEventCategoryFeatureExtractor : PGGraphFeatureExtractor

- (id)prefix;
- (id)initWithError:(id *)a0;
- (id)initWithVersion:(long long)a0 error:(id *)a1;
- (id)labelProcessingForVersion:(long long)a0 label:(id)a1;
- (id)labelsForVersion:(long long)a0;

@end
