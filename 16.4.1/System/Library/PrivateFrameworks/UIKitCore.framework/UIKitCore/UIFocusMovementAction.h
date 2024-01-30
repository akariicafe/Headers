@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (readonly, nonatomic) _UIFocusMovementInfo *focusMovementInfo;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusedFrame;

- (long long)UIActionType;
- (id)initWithFocusMovementInfo:(id)a0;
- (id)initWithFocusMovementInfo:(id)a0 inputDeviceInfo:(id)a1 shouldPerformHapticFeedback:(BOOL)a2;
- (id)initWithFocusMovementInfo:(id)a0 inputDeviceInfo:(id)a1 shouldPerformHapticFeedback:(BOOL)a2 focusedFrameInSceneCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
