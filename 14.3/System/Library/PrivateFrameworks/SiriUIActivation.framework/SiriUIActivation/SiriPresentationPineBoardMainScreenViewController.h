@protocol SiriPresentationPineBoardMainScreenViewControllerDelegate;

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController

@property (nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) double buttonDownTimestamp;
@property (weak, nonatomic) id<SiriPresentationPineBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate;

- (void)setNextAssistantRecognitionStrings:(id)a0;
- (id)initWithIdentifier:(long long)a0 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setNextVoiceRecognitionAudioInputPaths:(id)a0;
- (void)siriViewController:(id)a0 didChangePresentationPeekMode:(unsigned long long)a1;
- (void)siriViewController:(id)a0 sceneDidActivateWithIdentifier:(id)a1;
- (void)siriViewControllerDidDeactivateScene:(id)a0;
- (id)siriViewController:(id)a0 willStartRequestWithOptions:(id)a1;
- (void)siriViewControllerDidChangeToListeningMode:(id)a0;
- (void)_prewarmFlamesWithPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_thresholdForTriggeringABCInLaunch;
- (BOOL)_shouldShowSetupViewController;

@end
