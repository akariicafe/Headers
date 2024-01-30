@class SKTransition, SCNNode, SCNOffscreenRenderer, SCNScene;

@interface SCNRendererTransitionContext : NSObject {
    id /* block */ completionHandler;
    struct __C3DFXPass { } *_transitionPass;
    SCNOffscreenRenderer *_renderers[2];
}

@property (retain, nonatomic) SCNScene *outgoingScene;
@property (retain, nonatomic) SKTransition *transition;
@property (nonatomic) double transitionStartTime;
@property (retain, nonatomic) SCNNode *outgoingPointOfView;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)prepareRendererAtIndex:(int)a0 withScene:(id)a1 renderSize:(struct CGSize { double x0; double x1; })a2 pointOfView:(id)a3 parentRenderer:(id)a4;
- (struct __C3DFXPass { } *)transitionPass;

@end
