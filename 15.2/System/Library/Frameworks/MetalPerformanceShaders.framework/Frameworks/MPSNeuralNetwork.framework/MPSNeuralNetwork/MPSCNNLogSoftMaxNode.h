@interface MPSCNNLogSoftMaxNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)a0;

- (id)initWithSource:(id)a0;
- (void *)newFilterNode;
- (Class)gradientClass;

@end
