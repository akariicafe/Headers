@class NSString, UIWindow;

@interface UIEditingOverlayGestureView : UIView <_UIEventObserver>

@property (weak, nonatomic) UIWindow *previousWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (BOOL)_isTransparentFocusRegion;
- (id)_gestureRecognizersForEvent:(id)a0;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
