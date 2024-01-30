@class SBTouchHistory, UITouch, SBReachabilitySettings;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (retain, nonatomic) UITouch *activeTouch;
@property (nonatomic) struct CGPoint { double x; double y; } initialTouchLocation;
@property (nonatomic) BOOL everTranslatedUpwards;
@property (nonatomic) BOOL movedPastHysteresis;
@property (retain, nonatomic) SBReachabilitySettings *settings;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
