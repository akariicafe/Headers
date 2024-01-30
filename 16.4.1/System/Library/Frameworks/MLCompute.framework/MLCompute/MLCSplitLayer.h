@class NSArray;

@interface MLCSplitLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) unsigned long long splitCount;
@property (readonly, copy, nonatomic) NSArray *splitSectionLengths;

+ (id)layerWithSplitCount:(unsigned long long)a0 dimension:(unsigned long long)a1;
+ (id)layerWithSplitSectionLengths:(id)a0 dimension:(unsigned long long)a1;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensors:(id)a2;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (id)initWithSplitCount:(unsigned long long)a0 splitSectionLengths:(id)a1 dimension:(unsigned long long)a2;
- (BOOL)isStaticBatchSize;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)summarizedDOTDescription;

@end
