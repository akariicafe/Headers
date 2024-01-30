@class SBTouchHistory, SBFluidSwitcherViewController, NSString;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic) BOOL installedAsSystemGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
