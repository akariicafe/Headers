@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) int source;

- (id)initWithSource:(int)a0;
- (id)init;
- (long long)featureIdentifierType;

@end
