@class NURenderNode;

@interface NUAbstractScaleNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;

- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)_scaleImage:(id)a0 by:(struct { long long x0; long long x1; })a1 sampleMode:(long long)a2;

@end
