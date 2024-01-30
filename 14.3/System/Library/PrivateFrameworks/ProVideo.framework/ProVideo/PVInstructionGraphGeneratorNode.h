@class PVEffect;

@interface PVInstructionGraphGeneratorNode : PVInstructionGraphSourceNode

@property (retain, nonatomic) PVEffect *generatorEffect;

+ (id)newGeneratorNode:(id)a0;

- (void).cxx_destruct;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { } *)a1 renderer:(const struct HGRef<HGRenderer> { } *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (id)instructionGraphNodeDescription;
- (void)unloadIGNode;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;

@end
