@class NSArray;

@interface MLCSplitLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) unsigned long long splitCount;
@property (readonly, copy, nonatomic) NSArray *splitSectionLengths;

+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;
+ (id)layerWithSplitCount:(unsigned long long)a0 dimension:(unsigned long long)a1;
+ (id)layerWithSplitSectionLengths:(id)a0 dimension:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensors:(id)a2;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (BOOL)isStaticBatchSize;
- (id)initWithSplitCount:(unsigned long long)a0 splitSectionLengths:(id)a1 dimension:(unsigned long long)a2;

@end
