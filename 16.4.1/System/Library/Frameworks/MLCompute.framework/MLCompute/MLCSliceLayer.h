@class NSArray;

@interface MLCSliceLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *start;
@property (readonly, copy, nonatomic) NSArray *end;
@property (readonly, copy, nonatomic) NSArray *stride;

+ (id)sliceLayerWithStart:(id)a0 end:(id)a1 stride:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initSliceLayerWithStart:(id)a0 end:(id)a1 stride:(id)a2;
- (BOOL)isStaticBatchSize;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeForDimension:(unsigned long long)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
