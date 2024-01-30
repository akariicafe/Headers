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

+ (id)nodeWithSource:(id)a0 labels:(id)a1 lossDescriptor:(id)a2;
+ (id)nodeWithSources:(id)a0 lossDescriptor:(id)a1;
+ (id)nodeWithSource:(id)a0 labels:(id)a1 weights:(id)a2 lossDescriptor:(id)a3;

- (void)dealloc;
- (id)gradientFilterWithSource:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (id)initWithSources:(id)a0 lossDescriptor:(id)a1;
- (Class)gradientClass;
- (id)gradientFiltersWithSource:(id)a0;
- (id)initWithSource:(id)a0 labels:(id)a1 lossDescriptor:(id)a2;
- (id)initWithSource:(id)a0 labels:(id)a1 weights:(id)a2 lossDescriptor:(id)a3;
- (void *)newFilterNode;

@end
