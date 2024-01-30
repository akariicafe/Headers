@class SBTouchHistory, SBFluidSwitcherViewController, NSString;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic) BOOL installedAsSystemGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)peakSpeed;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;

@end
