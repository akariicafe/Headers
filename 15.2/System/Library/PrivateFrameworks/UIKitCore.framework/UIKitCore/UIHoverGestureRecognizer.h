@class UITouch, UIHoverEvent;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}

@property (nonatomic, getter=_pausesWhilePanning, setter=_setPausesWhilePanning:) BOOL pausesWhilePanning;
@property (readonly, nonatomic, getter=_previousTrackpadFingerDownCount) long long previousTrackpadFingerDownCount;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;

- (BOOL)_shouldReceivePress:(id)a0;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)_paused;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (void).cxx_destruct;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (BOOL)_wantsHoverEventsWhilePointerIsLocked;
- (void)reset;

@end
