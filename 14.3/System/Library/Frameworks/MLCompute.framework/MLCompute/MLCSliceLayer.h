@class NSArray;

@interface MLCSliceLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *start;
@property (readonly, copy, nonatomic) NSArray *end;
@property (readonly, copy, nonatomic) NSArray *stride;

+ (id)sliceLayerWithStart:(id)a0 end:(id)a1 stride:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (BOOL)isStaticBatchSize;
- (id)initSliceLayerWithStart:(id)a0 end:(id)a1 stride:(id)a2;
- (unsigned long long)resultSizeForDimension:(unsigned long long)a0;

@end
