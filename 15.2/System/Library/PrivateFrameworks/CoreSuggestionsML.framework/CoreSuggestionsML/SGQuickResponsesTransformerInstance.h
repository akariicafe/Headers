@class SGModelSampler, SGQuickResponsesConfig, SGModelSource;
@protocol PMLTransformerProtocol;

@interface SGQuickResponsesTransformerInstance : NSObject

@property (readonly, nonatomic) SGQuickResponsesConfig *config;
@property (readonly, nonatomic) id<PMLTransformerProtocol> featurizer;
@property (readonly, nonatomic) SGModelSource *source;
@property (readonly, nonatomic) id<PMLTransformerProtocol> labeler;
@property (readonly, nonatomic) SGModelSampler *sampler;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 featurizer:(id)a1 source:(id)a2 labeler:(id)a3 sampler:(id)a4;

@end
