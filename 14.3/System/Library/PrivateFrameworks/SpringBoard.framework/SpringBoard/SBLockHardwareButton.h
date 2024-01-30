@class SBVolumeHardwareButton, SBPressGestureRecognizer, SBHardwareButtonGestureParameters, NSString, BSMonotonicReferenceTime, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBHomeHardwareButton, SBClickGestureRecognizer, UIGestureRecognizer;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter> {
    unsigned long long _aggdStartTime;
    BSMonotonicReferenceTime *_lastPressDownReferenceTime;
    int _sysdiagnoseDidBeginNotificationToken;
}

@property (retain, nonatomic) SBLockHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer;
@property (retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (weak, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer;
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton;
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned long long configuredMaximumPressCount;
@property (nonatomic) unsigned long long currentPressCount;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)screenshotRecognizerDidRecognize:(id)a0;
- (void)_updatePressCountForDownEvent;
- (void).cxx_destruct;
- (BOOL)reverseFadeOutIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)hardwareButtonGestureParameters;
- (void)dealloc;
- (id)preemptablePressGestureRecognizers;
- (void)doublePress:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 proximitySensorManager:(id)a2 homeHardwareButton:(id)a3 volumeHardwareButton:(id)a4 buttonActions:(id)a5 homeButtonType:(long long)a6 createGestures:(BOOL)a7;
- (void)forceResetSequenceDidBegin;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)triplePress:(id)a0;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)a0;
- (void)buttonDown:(id)a0;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 proximitySensorManager:(id)a2 homeHardwareButton:(id)a3 volumeHardwareButton:(id)a4 homeButtonType:(long long)a5;
- (void)_createGestureRecognizers;
- (void)SOSTriggerMechanismDidChange;
- (void)quadruplePress:(id)a0;
- (void)singlePress:(id)a0;
- (void)cancelLongPress;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)longPress:(id)a0;
- (void)_reconfigureButtonGestureRecognizers;

@end
