@class SBApplicationSceneView, UIView, SBLayoutElement, SBOrientationTransformWrapperView;
@protocol BSInvalidatable;

@interface SBSceneLayoutElementAnimationWrapperView : UIView {
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
}

@property (readonly, nonatomic) SBLayoutElement *layoutElement;
@property (readonly, nonatomic) UIView<BSInvalidatable> *contentView;
@property (readonly, nonatomic) SBApplicationSceneView *applicationSceneViewIfExists;

- (void)willMoveToSuperview:(id)a0;
- (void)addContentView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)description;
- (void)layoutSubviews;
- (id)initWithLayoutElement:(id)a0 contentView:(id)a1 orientation:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;

@end
