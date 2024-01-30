@class MPSCNNInstanceNormalization;
@protocol MTLBuffer;

@interface MPSCNNInstanceNormalizationGradientState : MPSNNGradientState {
    unsigned long long _numberOfFeatureChannels;
}

@property (readonly, retain, nonatomic) MPSCNNInstanceNormalization *instanceNormalization;
@property (readonly, nonatomic) id<MTLBuffer> gamma;
@property (readonly, nonatomic) id<MTLBuffer> beta;
@property (readonly, nonatomic) id<MTLBuffer> gradientForGamma;
@property (readonly, nonatomic) id<MTLBuffer> gradientForBeta;

+ (id)temporaryStateWithCommandBuffer:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 instanceNormalization:(id)a2;

- (id)debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 instanceNormalization:(id)a2;

@end
