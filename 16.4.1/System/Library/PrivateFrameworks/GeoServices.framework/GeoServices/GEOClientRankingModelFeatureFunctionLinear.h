@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction

@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) float maxRelativeValue;
@property (readonly, nonatomic) float meanValue;

- (id)init;
- (long long)functionType;
- (id)initWithWeight:(float)a0 maxRelativeValue:(float)a1 meanValue:(float)a2;

@end
