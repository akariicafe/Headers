@class NSMapTable, NSArray, NSMutableSet, AVTMemoji, NSMutableArray, NSMutableDictionary;

@interface AVTAvatarMemoryOptimizer : NSObject {
    AVTMemoji *_memoji;
    NSMapTable *_requiredVariantsPerMorpher;
    NSMutableArray *_requiredMorphVariantComponents;
    NSMutableSet *_presetVariantPrefixes;
    NSArray *_oldWeights;
    NSArray *_oldMainTargets;
    BOOL _hasInBetweens;
    NSMutableArray *_newWeights;
    NSMutableArray *_newTargetsAndInBetweens;
    NSMutableArray *_newInBetweenCounts;
    NSMutableArray *_newInBetweenWeights;
    NSMutableArray *_indicesOfTargetsToFlattenInBaseGeometry;
    NSMutableDictionary *_indicesOfTargetsToFlattenInOtherTarget;
    NSMutableDictionary *_nonOneWeightsOfTargetsToFlatten;
    NSArray *_oldCorrectives;
    NSArray *_oldCorrectiveDriverCounts;
    NSArray *_oldCorrectiveDriverIndices;
    BOOL _hasCorrectives;
    BOOL _hasCorrectiveInBetweens;
    NSMutableArray *_newCorrectivesAndInBetweens;
    NSMutableArray *_newCorrectiveDriverCounts;
    NSMutableArray *_newCorrectiveDriverIndices;
    NSMutableArray *_newCorrectiveInBetweenCounts;
    NSMutableArray *_newCorrectiveInBetweenWeights;
    NSMutableArray *_indicesOfCorrectivesToFlattenInBaseGeometry;
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInMainTarget;
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInOtherCorrective;
    NSMutableDictionary *_nonOneWeightsOfCorrectivesToFlatten;
}

- (void).cxx_destruct;
- (BOOL)shouldClearCPUDataAfterUpload;
- (id)initWithMemoji:(id)a0;
- (void)applyMorphTarget:(id)a0 weight:(float)a1 toBaseGeometryBuffer:(void *)a2 vertexCount:(unsigned long long)a3;
- (void)applyMorphTarget:(id)a0 weight:(float)a1 toMorphTargetBuffer:(struct { float x0; float x1; float x2; } *)a2 vertexCount:(unsigned long long)a3;
- (void)classifyTargetsOfMorpher:(id)a0 node:(id)a1;
- (void)flattenCorrectiveAtIndex:(unsigned long long)a0 inBaseGeometryUsingWeight:(float)a1;
- (void)flattenCorrectiveAtIndex:(unsigned long long)a0 inCorrectiveAtIndex:(unsigned long long)a1 weight:(float)a2;
- (void)flattenCorrectiveAtIndex:(unsigned long long)a0 inTargetAtIndex:(unsigned long long)a1 weight:(float)a2;
- (void)flattenCorrectivesAtIndices:(id)a0 inCorrective:(id)a1 weight:(float)a2 morpher:(id)a3;
- (void)flattenCorrectivesAtIndices:(id)a0 inCorrectiveAtIndex:(unsigned long long)a1 morpher:(id)a2;
- (void)flattenRelevantTargetsInOtherTargetsOfMorpher:(id)a0;
- (void)flattenRelevantTargetsOfMorpher:(id)a0 inBaseGeometryOfNode:(id)a1;
- (id)flattenTarget0:(id)a0 weight0:(float)a1 target1:(id)a2 weight1:(float)a3 inMorphTarget:(id)a4 originalMorphTarget:(id)a5;
- (void)flattenTargetAtIndex:(unsigned long long)a0 inBaseGeometryUsingWeight:(float)a1;
- (void)flattenTargetAtIndex:(unsigned long long)a0 inTargetAtIndex:(unsigned long long)a1 weight:(float)a2;
- (void)flattenTargetsAtIndices:(id)a0 correctivesAtIndices:(id)a1 inTarget:(id)a2 weight:(float)a3 morpher:(id)a4;
- (void)flattenTargetsAtIndices:(id)a0 correctivesAtIndices:(id)a1 inTargetAtIndex:(unsigned long long)a2 morpher:(id)a3;
- (void)flattenTargetsOfMorpher:(id)a0 node:(id)a1;
- (void)keepCorrectiveAtIndex:(unsigned long long)a0 morpher:(id)a1;
- (void)keepCorrectiveAtIndex:(unsigned long long)a0 withDriverIndices:(id)a1 morpher:(id)a2;
- (void)keepTargetAtIndex:(unsigned long long)a0 morpher:(id)a1;
- (void)optimizeMemoji;
- (void)optimizeNode:(id)a0;
- (void)optimizeNodeHierarchy:(id)a0;
- (void)preprocessMemoji;
- (void)registerRequiredVariant:(id)a0 weight:(float)a1 inHierarchy:(id)a2;
- (void)resolveInBetweensForTarget:(id)a0 weight:(float)a1 inBetweenWeights:(id)a2 inBetweenTargets:(id)a3 block:(id /* block */)a4;
- (BOOL)shouldKeepCreasesAndCorners;

@end
