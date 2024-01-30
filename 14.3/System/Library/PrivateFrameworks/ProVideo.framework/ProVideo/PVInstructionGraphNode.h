@interface PVInstructionGraphNode : NSObject {
    unsigned long long _uuid;
}

@property (nonatomic) BOOL isDebugDrawingEnabled;

- (id)init;
- (id)requiredSourceTrackIDs;
- (id)description;
- (id)getAllSourceNodes;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (struct PVIGHGNodeCacheKey { unsigned long long x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; id x2; })contextHGNodeCacheKeyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { } *)a1 renderer:(const struct HGRef<HGRenderer> { } *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (id)instructionGraphNodeDescription;
- (BOOL)isPassthru;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (void)unloadIGNode;
- (struct HGRef<HGNode> { struct HGNode *x0; })hgNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { } *)a1 renderer:(const struct HGRef<HGRenderer> { } *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;

@end
