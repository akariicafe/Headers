@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) long long featureType;

- (long long)featureIdentifierType;
- (id)initWithFeatureType:(long long)a0;
- (id)init;

@end
