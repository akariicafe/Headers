@class AVTMemoji, NSMapTable, NSMutableArray;

@interface AVTAvatarMemoryOptimizer : NSObject {
    AVTMemoji *_memoji;
    NSMapTable *_requiredVariantsPerMorpher;
    NSMutableArray *_requiredPresetVariantComponents;
    NSMutableArray *_presetVariantPrefixes;
}

+ (void)optimizeMemoji:(id)a0;

- (void).cxx_destruct;
- (void)preprocess;
- (void)optimize;
- (id)initWithMemoji:(id)a0;
- (void)registerRequiredVariant:(id)a0 weight:(float)a1 inHierarchy:(id)a2;
- (void)optimizeNodeHierarchy:(id)a0;
- (void)optimizeNode:(id)a0;
- (void)changeTargetsAndInBetweens:(id)a0 weights:(id)a1 inBetweenCounts:(id)a2 inBetweenWeights:(id)a3 ofNode:(id)a4 targetsToFlattenInBaseGeometry:(id)a5 targetsToFlattenInOtherTarget:(id)a6 nonOneWeightsOfTargetsToFlatten:(id)a7;
- (void)performFlatteningInNode:(id)a0 targetsAndInBetweens:(id)a1 targetsToFlattenInBaseGeometry:(id)a2 targetsToFlattenInOtherTarget:(id)a3 nonOneWeightsOfTargetsToFlatten:(id)a4;
- (BOOL)clearCPUDataAfterUpload;
- (void)applyMorphTarget:(id)a0 weight:(float)a1 toBaseGeometryBuffer:(void *)a2 vertexCount:(unsigned long long)a3;
- (void)resolveInBetweensForTopLevelTargetAtIndex:(unsigned long long)a0 topLevelTargetWeight:(float)a1 topLevelTarget:(id)a2 inBetweenWeights:(id)a3 inBetweenTargets:(id)a4 block:(id /* block */)a5;
- (id)flattenTarget0:(id)a0 weight0:(float)a1 target1:(id)a2 weight1:(float)a3 inMorphTarget:(id)a4 originalMorphTarget:(id)a5;
- (void)applyMorphTarget:(id)a0 weight:(float)a1 toMorphTargetBuffer:(struct { float x0; float x1; float x2; } *)a2 vertexCount:(unsigned long long)a3;
- (BOOL)keepCreasesAndCorners;

@end
