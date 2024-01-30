@class UITouch, UIHoverEvent;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}

@property (nonatomic, getter=_pausesWhilePanning, setter=_setPausesWhilePanning:) BOOL pausesWhilePanning;
@property (readonly, nonatomic, getter=_previousTrackpadFingerDownCount) long long previousTrackpadFingerDownCount;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;

- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_paused;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_wantsHoverEventsWhilePointerIsLocked;

@end
