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

- (BOOL)_shouldEnterVoiceControl;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (BOOL)isVisible;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)a0;
- (void)_spokenLanguageDidChange:(id)a0;
- (void)_updateNextRecognitionAudioInputPaths:(id)a0;
- (void)_assistantActivationSettingsDidChange:(id)a0;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (id)siriBluetoothDeviceSource:(id)a0;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)a0;
- (void)configureVoiceControl;
- (void)headsetAvailabilityChanged;
- (void)_performDelayedHeadsetActionForAssistant;
- (void).cxx_destruct;
- (id)init;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)_prepareDelayedHeadsetAction;
- (BOOL)handleHeadsetButtonUp;
- (void)_cancelDelayedHeadsetAction;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (BOOL)handleHomeButtonHeld;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)a0;
- (void)dismissTransientOverlay;

@end
