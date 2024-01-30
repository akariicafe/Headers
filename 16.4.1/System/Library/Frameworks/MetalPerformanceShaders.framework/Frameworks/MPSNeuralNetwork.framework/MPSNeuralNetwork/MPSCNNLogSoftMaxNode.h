@interface MPSCNNLogSoftMaxNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)a0;

- (id)initWithSource:(id)a0;
- (Class)gradientClass;
- (void *)newFilterNode;

@end
