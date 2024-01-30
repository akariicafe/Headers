@class MPSCNNLossDescriptor;
@protocol MPSNNLossCallback;

@interface MPSNNForwardLossNode : MPSNNFilterNode {
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
@property (retain, nonatomic) id<MPSNNLossCallback> propertyCallBack;

+ (id)nodeWithSource:(id)a0 labels:(id)a1 weights:(id)a2 lossDescriptor:(id)a3;
+ (id)nodeWithSource:(id)a0 labels:(id)a1 lossDescriptor:(id)a2;
+ (id)nodeWithSources:(id)a0 lossDescriptor:(id)a1;

- (void)dealloc;
- (struct FilterGraphNode { void /* function */ **x0; struct ResourceGraphNode *x1; struct ResourceGraphNode *x2; struct FilterGraphNode *x3; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **x0; unsigned long long x1; unsigned long long x2; } x6; union { id x0; id x1; id x2; id x3; } x7; id x8; unsigned long long x9; BOOL x10; BOOL x11; unsigned int x12; unsigned long long x13; } *)newFilterNode;
- (Class)gradientClass;
- (id)gradientFilterWithSource:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (id)initWithSource:(id)a0 labels:(id)a1 weights:(id)a2 lossDescriptor:(id)a3;
- (id)gradientFiltersWithSource:(id)a0;
- (id)initWithSource:(id)a0 labels:(id)a1 lossDescriptor:(id)a2;
- (id)initWithSources:(id)a0 lossDescriptor:(id)a1;

@end
