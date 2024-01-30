@class PVEffect;

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {
    struct map<unsigned int, PVInstructionGraphNode *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, PVInstructionGraphNode *>>> { struct __tree<std::__value_type<unsigned int, PVInstructionGraphNode *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, PVInstructionGraphNode *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _inputMap;
}

@property (retain, nonatomic) PVEffect *effect;
@property (nonatomic) BOOL bypassOutOfRangeEffects;
@property (nonatomic) BOOL applyRenderTransformAfterEffect;

+ (id)newEffectNodeToAddTitle:(id)a0 effect:(id)a1;
+ (id)newEffectNodeToFilterInput:(id)a0 effect:(id)a1;
+ (id)newEffectNodeToOverlayInputs:(id)a0 inputIDs:(id)a1 effect:(id)a2;
+ (id)newEffectNodeToTransitionFrom:(id)a0 to:(id)a1 effect:(id)a2;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (id)instructionGraphNodeDescription;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (void)buildEffectInputMap:(void *)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 trackInputs:(const void *)a2 renderer:(const void *)a3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a4;
- (struct PVIGHGNodeCacheKey { unsigned long long x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; id x2; })contextHGNodeCacheKeyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (id)getAllSourceNodes;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)setInputNode:(id)a0 forInputID:(unsigned int)a1;
- (void)unloadIGNode;

@end
