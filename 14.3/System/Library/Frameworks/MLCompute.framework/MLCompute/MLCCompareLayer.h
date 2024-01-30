@interface MLCCompareLayer : MLCLayer

@property (readonly, nonatomic) int predicate;

+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;
+ (id)layerWithPredicate:(int)a0;

- (id)description;
- (id)initWithPredicate:(int)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;

@end
