@class NSString, SiriLongPressButtonSource;
@protocol SiriAssertion;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>

@property (nonatomic) long long siriButtonIdentifier;
@property (retain, nonatomic) SiriLongPressButtonSource *siriActivationSource;
@property (nonatomic) double activationInterval;
@property (retain, nonatomic) id<SiriAssertion> siriPreheatAssertion;
@property (retain, nonatomic) id<SiriAssertion> siriButtonDownAssertion;
@property (nonatomic) double initialPressDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;
+ (BOOL)dismissSiriTransientOverlayOnSinglePressUp:(long long)a0;
+ (id)hardwareButtonInteractionForVoiceCommandButton;

- (void).cxx_destruct;
- (void)_siriHomeButtonPrefsDidChange:(id)a0;
- (id)hardwareButtonGestureParameters;
- (void)_cancelAllSiriActions;
- (BOOL)consumeSinglePressUp;
- (void)observeFinalPressUp;
- (id)initWithSiriButton:(long long)a0;
- (BOOL)consumeInitialPressDown;
- (void)_preheatSiriForPresentationAfterInterval:(double)a0;
- (void)_cancelPreheating;
- (BOOL)consumeLongPress;
- (void)observeLongPressCanceled;

@end
