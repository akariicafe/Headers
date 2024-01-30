@class NSString, UIWindow;

@interface UIEditingOverlayGestureView : UIView <_UIEventObserver>

@property (weak, nonatomic) UIWindow *previousWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_gestureRecognizersForEvent:(id)a0;
- (void)didMoveToWindow;
- (int)textEffectsVisibilityLevel;
- (BOOL)_isTransparentFocusRegion;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
