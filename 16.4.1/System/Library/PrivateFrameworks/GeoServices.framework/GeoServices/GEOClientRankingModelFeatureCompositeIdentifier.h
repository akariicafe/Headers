@class NSArray;

@interface GEOClientRankingModelFeatureCompositeIdentifier : GEOClientRankingModelFeatureIdentifier

@property (copy, nonatomic) NSArray *unitExponentPairs;
@property (readonly, nonatomic) float featureWeight;

- (void).cxx_destruct;
- (long long)featureIdentifierType;
- (id)initWithUnitExponentPairs:(id)a0 featureWeight:(float)a1;

@end
