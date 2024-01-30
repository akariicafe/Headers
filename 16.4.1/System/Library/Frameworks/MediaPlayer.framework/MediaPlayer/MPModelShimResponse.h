@class MPModelResponse;

@interface MPModelShimResponse : MPResponse

@property (retain, nonatomic) MPModelResponse *modelResponse;

+ (id)builderProtocol;

- (id)initWithRequest:(id)a0 middleware:(id)a1;
- (void).cxx_destruct;

@end
