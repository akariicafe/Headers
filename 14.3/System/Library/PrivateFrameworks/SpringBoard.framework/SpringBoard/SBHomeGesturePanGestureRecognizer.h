@class NSString, SBHomeGestureSettings, UIView, SBTouchHistory, SBFluidSwitcherGestureExclusionTrapezoid;
@protocol SBHomeGesturePanGestureRecognizerInterfaceDelegate;

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>

@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid;
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) id<SBHomeGesturePanGestureRecognizerInterfaceDelegate> interfaceDelegate;
@property (nonatomic) BOOL preventHorizontalSwipesOutsideTrapezoid;
@property (nonatomic) BOOL installedAsSystemGesture;
@property (readonly, weak, nonatomic) UIView *viewForTouchHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeGesturePanGestureRecognizerWithTarget:(id)a0 action:(SEL)a1;

- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (BOOL)_shouldBlockHomeGestureForKeyboardInputMode:(id)a0;
- (id)_currentExclusionShapeForEdge:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (BOOL)_shouldBegin;
- (void).cxx_destruct;
- (void)sb_commonInitHomeGesturePanGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (void)reset;
- (void)_SBLogTouchesWithMethodName:(id)a0 withMethodName:(id)a1;
- (id)_currentKeyboardExclusionCompositeShape;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_updateHomeGestureParameters;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (BOOL)_isOutsideOfExclusionTrapezoid;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_setUpExclusionTrapezoids;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (long long)_touchInterfaceOrientation;

@end
