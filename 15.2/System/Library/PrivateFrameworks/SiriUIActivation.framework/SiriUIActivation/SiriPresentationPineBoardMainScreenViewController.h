@class AFClientLite, NSObject;
@protocol OS_dispatch_group, SiriPresentationPineBoardMainScreenViewControllerDelegate;

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {
    NSObject<OS_dispatch_group> *_requestDictationFromSiriGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dictationInProgressLock;
    BOOL _didRequestDictationStart;
    BOOL _shouldListenForSceneActivation;
    BOOL _shouldRequestDictation;
}

@property (nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) double buttonDownTimestamp;
@property (retain, nonatomic) AFClientLite *clientLite;
@property (weak, nonatomic) id<SiriPresentationPineBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate;

- (id)initWithIdentifier:(long long)a0 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setNextAssistantRecognitionStrings:(id)a0;
- (void)setNextVoiceRecognitionAudioInputPaths:(id)a0;
- (void).cxx_destruct;
- (void)siriViewControllerDidPresentKeyboard:(id)a0;
- (void)siriViewController:(id)a0 didChangePresentationPeekMode:(unsigned long long)a1;
- (void)siriViewController:(id)a0 sceneDidActivateWithIdentifier:(id)a1;
- (void)siriViewControllerDidDeactivateScene:(id)a0;
- (id)siriViewController:(id)a0 willStartRequestWithOptions:(id)a1;
- (void)siriViewController:(id)a0 didReceiveButtonUpWithRequestOptions:(id)a1;
- (void)siriViewControllerDidChangeToListeningMode:(id)a0;
- (void)_prewarmFlamesWithPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prewarmSiriVideoFlowDelegatePlugin;
- (void)_forwardHIDButtonEventWithUsagePage:(unsigned int)a0 usage:(unsigned int)a1 type:(long long)a2 senderID:(unsigned long long)a3;
- (double)_thresholdForTriggeringABCInLaunch;
- (BOOL)_shouldShowSetupViewController;
- (BOOL)_getValueForShouldRequestDictation;

@end
