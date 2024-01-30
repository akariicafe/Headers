@interface ADWebViewGestureRecognizer : UIGestureRecognizer

@property (nonatomic) long long lastTrackedTouch;
@property (nonatomic) double mostRecentTapTimestamp;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) BOOL pointIsInsideView;
@property (readonly, nonatomic) BOOL shouldBlockNavigation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } mostRecentTapLocation;
@property (readonly, nonatomic) BOOL wasViewTappedRecently;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
