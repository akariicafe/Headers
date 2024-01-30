@class PKRecognitionSessionManager, PKProgressAlertController, NSProgress, NSString, PKAttachmentView, PKStrokeSelection;

@interface PKTranscriptionController : NSObject <PKProgressAlertControllerDelegate>

@property (weak, nonatomic) PKRecognitionSessionManager *recognitionManager;
@property (retain, nonatomic) PKProgressAlertController *progressAlertController;
@property (retain, nonatomic) NSProgress *currentProgress;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL didReceiveTranscription;
@property (nonatomic) BOOL didShowHUD;
@property (copy, nonatomic) NSString *textTranscription;
@property (weak, nonatomic) PKAttachmentView *attachment;
@property (retain, nonatomic) PKStrokeSelection *strokeSelection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)textInputDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_hideHUD;
- (void)findTranscriptionWithCompletion:(id /* block */)a0;
- (id)initWithRecognitionManager:(id)a0 strokeSelection:(id)a1 attachment:(id)a2;
- (id)_fetchTranscriptionWithCompletion:(id /* block */)a0;
- (void)_showHUDWithProgress:(id)a0;
- (void)_progressChanged;
- (void)_unregisterProgressObserver;
- (void)cancelAndTeardown;
- (void)alertControllerDidCancel:(id)a0;

@end
