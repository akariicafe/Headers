@interface MLCGramMatrixLayer : MLCLayer

@property (readonly, nonatomic) float scale;

+ (id)layerWithScale:(float)a0;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (unsigned long long)resultSizeFromSourceSizes:(id)a0 dimension:(unsigned long long)a1;
- (id)initWithScaleFactor:(float)a0;

@end
