@class MPSCNNGroupNormalization;
@protocol MTLBuffer;

@interface MPSCNNGroupNormalizationGradientState : MPSNNGradientState {
    unsigned long long _numberOfFeatureChannels;
    unsigned long long _numberOfGroups;
}

@property (readonly, retain, nonatomic) MPSCNNGroupNormalization *groupNormalization;
@property (readonly, nonatomic) id<MTLBuffer> gamma;
@property (readonly, nonatomic) id<MTLBuffer> beta;
@property (readonly, nonatomic) id<MTLBuffer> gradientForGamma;
@property (readonly, nonatomic) id<MTLBuffer> gradientForBeta;

+ (id)temporaryStateWithCommandBuffer:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 groupNormalization:(id)a2;

- (id)debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)a0 numberOfFeatureChannels:(unsigned long long)a1 groupNormalization:(id)a2;

@end
