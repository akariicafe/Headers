@class SBAppSwitcherSettings, NSString, UIPreviewForceInteractionProgress, SBTouchHistory;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding> {
    UIPreviewForceInteractionProgress *_forceObserver;
    SBAppSwitcherSettings *_settings;
}

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (readonly, nonatomic) double forcePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)interactionProgressDidUpdate:(id)a0;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)peakSpeed;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void)dealloc;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;

@end
