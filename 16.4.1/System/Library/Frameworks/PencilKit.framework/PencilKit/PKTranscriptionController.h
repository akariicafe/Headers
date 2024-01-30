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
@property (nonatomic) int transcriptionType;

- (void)textInputDidChange:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_fetchTranscriptionWithCompletion:(id /* block */)a0;
- (void)_hideHUD;
- (void)_progressChanged;
- (void)_showHUDWithProgress:(id)a0;
- (void)_unregisterProgressObserver;
- (void)alertControllerDidCancel:(id)a0;
- (void)cancelAndTeardown;
- (void)findTranscriptionForType:(int)a0 withCompletion:(id /* block */)a1;
- (id)initWithRecognitionManager:(id)a0 strokeSelection:(id)a1 attachment:(id)a2;

@end
