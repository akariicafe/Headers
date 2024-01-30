@class FBSceneLayer, UITransformer, UIScenePresentationContext;

@interface _UISceneLayerHostView : _UIDirectionalRotationView {
    UIScenePresentationContext *_presentationContext;
}

@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext;
@property (retain, nonatomic) UITransformer *transformer;
@property (readonly, nonatomic) FBSceneLayer *sceneLayer;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithSceneLayer:(id)a0;

@end
