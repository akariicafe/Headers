@interface PGInvariantPetFeatureExtractor : PGGraphFeatureExtractor

- (id)initWithError:(id *)a0;
- (id)initWithVersion:(long long)a0 error:(id *)a1;
- (id)labelProcessingForPetNodeSpecies:(unsigned long long)a0;
- (id)labelsForVersion:(long long)a0;
- (id)nodeProcessingForVersion:(long long)a0 node:(id)a1;

@end
