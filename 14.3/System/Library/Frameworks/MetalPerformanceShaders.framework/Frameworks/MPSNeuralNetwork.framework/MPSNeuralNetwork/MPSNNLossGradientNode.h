@class MPSCNNLossDescriptor;
@protocol MPSNNLossCallback;

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}

@property (readonly, nonatomic) unsigned int lossType;
@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) unsigned long long numberOfClasses;
@property (readonly, nonatomic) BOOL reduceAcrossBatch;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) float labelSmoothing;
@property (readonly, nonatomic) float epsilon;
@property (readonly, nonatomic) float delta;
@property (readonly, nonatomic) BOOL isLabelsGradientFilter;
@property (retain, nonatomic) id<MPSNNLossCallback> propertyCallBack;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 weights:(id)a3 gradientState:(id)a4 lossDescriptor:(id)a5 isLabelsGradientFilter:(BOOL)a6;
+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 gradientState:(id)a3 lossDescriptor:(id)a4 isLabelsGradientFilter:(BOOL)a5;
+ (id)nodeWithSources:(id)a0 gradientState:(id)a1 lossDescriptor:(id)a2 isLabelsGradientFilter:(BOOL)a3;

- (void)dealloc;
- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (id)gradientFilterWithSources:(id)a0;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 weights:(id)a3 gradientState:(id)a4 lossDescriptor:(id)a5 isLabelsGradientFilter:(BOOL)a6;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 labels:(id)a2 gradientState:(id)a3 lossDescriptor:(id)a4 isLabelsGradientFilter:(BOOL)a5;
- (id)initWithSources:(id)a0 gradientState:(id)a1 lossDescriptor:(id)a2 isLabelsGradientFilter:(BOOL)a3;

@end
