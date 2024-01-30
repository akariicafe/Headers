@class NSString, SiriLongPressButtonSource;
@protocol SiriAssertion;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SiriLongPressButtonSourceDelegate, SBHardwareButtonInteraction>

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

+ (BOOL)dismissSiriTransientOverlayOnSinglePressUp:(long long)a0;
+ (id)hardwareButtonInteractionForHomeButton;
+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForVoiceCommandButton;

- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (BOOL)consumeInitialPressDown;
- (id)hardwareButtonGestureParameters;
- (BOOL)consumeLongPress;
- (void)_cancelPreheating;
- (void)_siriHomeButtonPrefsDidChange:(id)a0;
- (void)_preheatSiriForPresentationAfterInterval:(double)a0;
- (id)initWithSiriButton:(long long)a0;
- (BOOL)consumeSinglePressUp;
- (void)_cancelAllSiriActions;
- (void)configurationDidUpdateOnLongPressSource:(id)a0;
- (void).cxx_destruct;

@end
