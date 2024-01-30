@class NSURL, UILabel, HMCameraClipFetchVideoAssetContextOperation, HUCameraRecordingPlayerView, HMCameraClip, UIButton, NSString, AVPlayerLooper, AVQueuePlayer, UIActivityIndicatorView, UITextView, NSOperationQueue, HMCameraProfile;

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate>

@property (weak, nonatomic) HMCameraClip *cameraClip;
@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSURL *exportURL;
@property (retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;
@property (nonatomic) BOOL hasVideoPreview;
@property (weak, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) HUCameraRecordingPlayerView *playerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UITextView *learnMoreTextView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id queuePlayerObserver;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)_addConstraints;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithCameraClip:(id)a0 cameraProfile:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareRecordingForExport;
- (void)cancelSubmission;
- (void)_loadPreviewInterface;
- (void)_loadLoadingInterface;
- (void)playVideoFile;
- (void)didDismissPrivacyViewController;
- (void)_displayFailureToSubmitAlert;
- (void)_stripAndTruncateRecording;
- (void)submitCurrentClip;
- (void)showPrivacyInformation;

@end
