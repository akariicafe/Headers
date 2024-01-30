@class GEOClientRankingModelFeatureIdentifier, GEOClientRankingModelFeatureFunction;

@interface GEOClientRankingModelFeature : NSObject

@property (readonly, nonatomic) GEOClientRankingModelFeatureIdentifier *featureIdentifier;
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 function:(id)a1;

@end
