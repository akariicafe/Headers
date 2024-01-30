@class SiriLongPressButtonSource, NSString, NSArray, SBVoiceControlTransientOverlayViewController;
@protocol SiriAssertion;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id<SiriAssertion> _siriPreheatAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)_cancelDelayedHeadsetAction;
- (void)_spokenLanguageDidChange:(id)a0;
- (id)init;
- (void)_prepareDelayedHeadsetAction;
- (BOOL)handleHeadsetButtonUp;
- (void).cxx_destruct;
- (void)dismissTransientOverlay;
- (void)_assistantActivationSettingsDidChange:(id)a0;
- (void)headsetAvailabilityChanged;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)_performDelayedHeadsetActionForAssistant;
- (BOOL)handleHomeButtonHeld;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (BOOL)isVisible;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)a0;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (BOOL)_shouldEnterVoiceControl;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)a0;
- (void)_updateNextRecognitionAudioInputPaths:(id)a0;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)a0;
- (void)configureVoiceControl;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (id)siriBluetoothDeviceSource:(id)a0;

@end
