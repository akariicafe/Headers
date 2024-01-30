@class MPModelResponse;

@interface MPModelShimResponse : MPResponse

@property (retain, nonatomic) MPModelResponse *modelResponse;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 middleware:(id)a1;

@end
