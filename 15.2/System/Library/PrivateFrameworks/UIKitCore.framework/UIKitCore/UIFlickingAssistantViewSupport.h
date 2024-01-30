@class UIPanGestureRecognizer, UIInputViewSetPlacement;

@interface UIFlickingAssistantViewSupport : UIKeyboardMotionSupport {
    UIPanGestureRecognizer *_panRecognizer;
    long long _position;
    long long _lastMinimizedPosition;
    long long _visualState;
    struct CGPoint { double x; double y; } _initalTouchPoint;
    BOOL _shouldNotifyCompletion;
}

@property (nonatomic) long long draggingState;
@property (nonatomic, setter=setCompact:) BOOL isCompact;
@property (retain, nonatomic) UIInputViewSetPlacement *remotePlacement;

- (void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })barOriginFromTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updatedController;
- (void)panGestureHandler:(id)a0;
- (struct CGPoint { double x0; double x1; })keyboardOriginFromAssistantViewPosition:(long long)a0;
- (void)updateTransition:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_disconnectingController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })assistantFrame;
- (void)_initalizePosition;
- (unsigned long long)assistantPosition;
- (BOOL)isInputAssistantItemHidden;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })projectedLandingPointForGestureRecognizerEnd:(id)a0;
- (void)_connectController:(id)a0;
- (void)didUpdateTransition;
- (void)transitToDraggingVisualState:(long long)a0 withTouchLocation:(struct CGPoint { double x0; double x1; })a1;

@end
