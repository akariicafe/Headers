@class NSMutableDictionary, TVRCDevice, TVRCDeviceAuthenticationChallenge, NSString;
@protocol TVRUIDeviceDelegate;

@interface TVRUICoreDevice : NSObject <TVRCDeviceDelegate, TVRCKeyboardControllerDelegate, TVRUIDevice>

@property (retain, nonatomic) TVRCDevice *device;
@property (weak, nonatomic) id<TVRUIDeviceDelegate> delegate;
@property (retain, nonatomic) TVRCDeviceAuthenticationChallenge *currentChallenge;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic) BOOL supportsLaunchingApplications;
@property (readonly, nonatomic) BOOL supportsCaptionsToggle;
@property (readonly, nonatomic) BOOL supportsSiri;
@property (readonly, nonatomic) BOOL supportsMute;
@property (readonly, nonatomic) BOOL supportsPower;
@property (readonly, nonatomic) BOOL supportsGuide;
@property (readonly, nonatomic) BOOL supportsPaging;
@property (readonly, nonatomic) BOOL captionsEnabled;
@property (nonatomic, getter=isConnecting) BOOL connecting;
@property (retain, nonatomic) NSMutableDictionary *coreButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_coreButtonEventTypeForEventType:(long long)a0;
+ (long long)_coreButtonTypeForButton:(long long)a0;
+ (long long)_uiButtonTypeFromCore:(long long)a0;

- (void)connect;
- (id)identifier;
- (BOOL)isPaired;
- (id)model;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isEqualToDevice:(id)a0;
- (void)deviceConnected:(id)a0;
- (id)name;
- (id)currentText;
- (void)sendButtonEvent:(id)a0;
- (void)sendText:(id)a0;
- (BOOL)isLegacyAppleTV;
- (void)deviceBeganConnecting:(id)a0;
- (void)device:(id)a0 encounteredAuthenticationChallenge:(id)a1;
- (void)device:(id)a0 disconnectedForReason:(long long)a1 error:(id)a2;
- (void)device:(id)a0 removedSupportedButtons:(id)a1 added:(id)a2;
- (BOOL)supportsTouchEvents;
- (void)sendTouchEvent:(id)a0;
- (void)sendReturnKey;
- (void)keyboardController:(id)a0 didUpdateText:(id)a1;
- (void)keyboardController:(id)a0 didUpdateAttributes:(id)a1;
- (void)keyboardController:(id)a0 beganTextEditingWithAttributes:(id)a1;
- (void)keyboardControllerEndedTextEditing:(id)a0;
- (id)keyboardAttributes;
- (BOOL)supportsModernConnections;
- (void)disconnectUserInitiated;
- (void)cancelAuthenitcationChallenge;
- (void)disconnectSystemInitiated;
- (BOOL)supportsDonatingIntents;
- (BOOL)hasIdentifier:(id)a0;
- (void)sendAuthenticationCode:(id)a0;
- (void)sendTextInputPayload:(id)a0;
- (id)deviceContextInformation;
- (void)disconnectWithTimeOut;
- (void)stopVoiceRecorder;
- (long long)_tvrcTouchPhaseFromUITouchPhase:(long long)a0;
- (void)_disconnectWithType:(unsigned long long)a0;
- (void)_processButtonsForFeatureAdditions:(id)a0;
- (long long)_disconnectReasonFromCoreReason:(long long)a0;
- (void)_processButtonsForFeatureRemovals:(id)a0;
- (BOOL)_isMediaButton:(id)a0;
- (BOOL)_isVolumeButton:(id)a0;
- (BOOL)_isLaunchApplicationButton:(id)a0;
- (BOOL)_isCaptionsToggleButton:(id)a0;
- (void)_notifyDelegateForSiriAndVolume;
- (void)startVoiceRecorder;
- (id)_initWithDeviceIdentifier:(id)a0;
- (id)_initWithCoreDevice:(id)a0;

@end
