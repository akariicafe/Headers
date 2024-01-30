@class MLCGraph;

@interface MLCConditionalLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCGraph *trueBranch;
@property (readonly, retain, nonatomic) MLCGraph *falseBranch;

+ (id)layerWithTrueBranch:(id)a0 falseBranch:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)resultTensorFromSources:(id)a0;
- (id)initWithTrueBranch:(id)a0 falseBranch:(id)a1;
- (unsigned long long)resultSizeForOutputIndex:(unsigned long long)a0 dimension:(unsigned long long)a1;

@end
