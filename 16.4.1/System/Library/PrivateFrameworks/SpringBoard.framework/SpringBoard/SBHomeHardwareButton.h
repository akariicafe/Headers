@class NSString, SBHardwareButtonGestureParameters, SBHomeHardwareButtonGestureRecognizerConfiguration, NSMutableDictionary, BKSButtonHapticsDefinition, NSMutableSet, SBHomeHardwareButtonActions, NSMutableOrderedSet, UIGestureRecognizer;
@protocol BSInvalidatable;

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver> {
    id<BSInvalidatable> _fingerDetectEnabledAssertion;
    NSMutableSet *_hintSuppressionAssertions;
    NSMutableOrderedSet *_longPressDurationAssertions;
}

@property (retain, nonatomic) SBHomeHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (retain, nonatomic) SBHomeHardwareButtonGestureRecognizerConfiguration *gestureRecognizerConfiguration;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) long long maximumTapCount;
@property (nonatomic) BOOL longPressDidOccur;
@property (retain, nonatomic) NSMutableDictionary *emulatedPerSenderDownCount;
@property (retain, nonatomic) BKSButtonHapticsDefinition *buttonDefinition;
@property (readonly, nonatomic, getter=isButtonDown) BOOL buttonDown;
@property (readonly, nonatomic) BOOL supportsAcceleratedAppDismiss;
@property (nonatomic) long long hapticType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWhenMenuButtonIsUpUsingBlock:(id /* block */)a0;
- (void)_singlePressUp:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 homeButtonType:(long long)a1 buttonActions:(id)a2 gestureRecognizerConfiguration:(id)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)initialButtonUp:(id)a0;
- (void)doubleTapUp:(id)a0;
- (void)_reconfigureGestureRecognizersForNewMaximumPressCount:(long long)a0 oldMaximumPressCount:(long long)a1;
- (void)cancelLongPress;
- (void)_terminateHomeButtonEventAtCount:(long long)a0;
- (void)addLongPressDurationAssertion:(id)a0;
- (void)_cancelGestureRecognizer:(id)a0;
- (void)removeHintSuppressionAssertion:(id)a0;
- (BOOL)_processDoubleDownAndDoubleUpSimultaneously;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)configureForwardingToLockButton:(id)a0;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(id /* block */)a0;
- (void)_reconfigureHomeButton;
- (void)doublePressUp:(id)a0;
- (void)initialButtonDown:(id)a0;
- (void)longPress:(id)a0;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)screenshotRecognizerDidRecognize:(id)a0;
- (void)_startObservingReconfigurationTriggers;
- (void)_createGestureRecognizersWithConfiguration:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 homeButtonType:(long long)a1;
- (void)acceleratedSinglePressUp:(id)a0;
- (void)triplePressUp:(id)a0;
- (void)_reconfigureGestureRecognizersForNewMaximumTapCount:(long long)a0 oldMaximumTapCount:(long long)a1;
- (BOOL)_longPressGestureRecognizerShouldBegin:(id)a0;
- (BOOL)_isMenuDoublePressDisabled;
- (void)doublePressDown:(id)a0;
- (BOOL)_isMenuDoublePressAllowed:(id *)a0;
- (void)_setFingerDetectionEnabled:(BOOL)a0;
- (BOOL)_acceleratedSinglePressRecognizerShouldBegin;
- (BOOL)emulateHomeButtonEventsIfNeeded:(struct __IOHIDEvent { } *)a0;
- (void)addHintSuppressionAssertion:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)removeLongPressDurationAssertion:(id)a0;
- (void)singlePressUp:(id)a0;

@end
