@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (nonatomic) int textureWrapMode;
@property (nonatomic) BOOL isOverlayTrack;

- (BOOL)isPortrait;
- (id)init;
- (void).cxx_destruct;
- (id)getAllSourceNodes;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode *x0; })applyWrapModeToInput:(struct HGRef<HGNode> { struct HGNode *x0; })a0;

@end
