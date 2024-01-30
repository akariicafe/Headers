@class NSString;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode>

@property (readonly, nonatomic) id<MPSCNNConvolutionDataSource> weights;
@property (nonatomic) unsigned long long trainingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 weights:(id)a3;

- (void)dealloc;
- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 weights:(id)a3;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 weights:(id)a3;
- (void *)newFilterNode;

@end
