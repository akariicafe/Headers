@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {
    void *_skc3DNode;
}

@property struct CGSize { double x0; double x1; } viewportSize;
@property (retain, nonatomic) SCNScene *scnScene;
@property (nonatomic) double sceneTime;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithViewportSize:(struct CGSize { double x0; double x1; })a0;

- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)projectPoint:(SEL)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* unknown type, empty encoding */)unprojectPoint:(SEL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0;
- (void)_renderForTime:(double)a0;
- (void)_scnSceneDidUpdate:(id)a0;

@end
