@class NSArray;
@protocol NUScalePolicy;

@interface NUVideoRenderClient : NURenderClient

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (nonatomic) long long sampleMode;
@property (copy, nonatomic) NSArray *pipelineFilters;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 responseQueue:(id)a1;
- (void)submitRequestForComposition:(id)a0 completion:(id /* block */)a1;

@end
