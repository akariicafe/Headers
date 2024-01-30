@class NSArray;
@protocol NUScalePolicy;

@interface NUVideoRenderClient : NURenderClient

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (nonatomic) long long sampleMode;
@property (copy, nonatomic) NSArray *pipelineFilters;

- (void).cxx_destruct;
- (void)submitRequestForComposition:(id)a0 completion:(id /* block */)a1;
- (id)initWithName:(id)a0 responseQueue:(id)a1;

@end
