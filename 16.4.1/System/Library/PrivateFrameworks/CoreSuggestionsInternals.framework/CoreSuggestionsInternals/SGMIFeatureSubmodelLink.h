@interface SGMIFeatureSubmodelLink : NSObject

@property (readonly) long long submodeledFeature;
@property (readonly) long long unigramFeature;
@property (readonly) long long bigramFeature;

- (id)initFor:(long long)a0 fromUnigram:(long long)a1 andBigram:(long long)a2;

@end
