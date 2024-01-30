@class MPSNNLabelsNode, MPSCNNLossDescriptor;

@interface MPSCNNLossNode : MPSNNFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}

@property (readonly, retain, nonatomic) MPSNNLabelsNode *inputLabels;

+ (id)nodeWithSource:(id)a0 lossDescriptor:(id)a1;

- (void)dealloc;
- (void *)newFilterNode;
- (id)gradientFilterWithSources:(id)a0;
- (id)initWithSource:(id)a0 lossDescriptor:(id)a1;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;

@end
