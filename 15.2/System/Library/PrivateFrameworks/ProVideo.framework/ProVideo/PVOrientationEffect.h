@protocol PVEffectTimeNotificationDelegate;

@interface PVOrientationEffect : PVHeliumEffect

@property (nonatomic) double switchTime;
@property (nonatomic) double switchSetTime;
@property (nonatomic) BOOL oldShowAlt;
@property (nonatomic) int oldInputID;
@property (weak) id<PVEffectTimeNotificationDelegate> timeNotificationDelegate;
@property (nonatomic) BOOL showAlt;
@property (nonatomic) unsigned int inputID;
@property (nonatomic) double animationTime;

+ (void)registerEffectWithID:(id)a0 displayName:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEffectID:(id)a0;
- (void)orientationChangeRequest:(id)a0;
- (id)inputsForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct HGRef<HGXForm> { struct HGXForm *x0; })rotationNodeForPercent:(float)a0 atCenter:(struct CGPoint { double x0; double x1; })a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })previewHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputHGNode:(struct HGRef<HGNode> { struct HGNode *x0; })a1 outputSize:(struct CGSize { double x0; double x1; })a2 renderer:(void *)a3;
- (struct HGRef<HGNode> { struct HGNode *x0; })hgNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;

@end
