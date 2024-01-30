@class CKMediaObject, NSError, UIView, CKActionMenuItem, NSString, UIWindow, UIButton, CKRecordingElapsedTimeView, UIImagePickerController, CKActionMenuController;
@protocol CKVideoMessageRecordingViewControllerDelegate;

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate> {
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    BOOL _presented;
    BOOL _previewWarmedUp;
    BOOL _showingVideo;
}

@property (retain, nonatomic) UIView *topBackgroundView;
@property (retain, nonatomic) CKRecordingElapsedTimeView *timerView;
@property (retain, nonatomic) CKActionMenuController *videoActionMenuController;
@property (retain, nonatomic) CKActionMenuItem *photoMenuItem;
@property (retain, nonatomic) UIButton *swapCameraButton;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL sending;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL triedToRecord;
@property (nonatomic) unsigned long long enableCancel;
@property (retain, nonatomic) CKMediaObject *mediaObjectForSending;
@property (retain, nonatomic) NSError *captureError;
@property (copy, nonatomic) id /* block */ mediaExportCompletionBlock;
@property (retain, nonatomic) UIImagePickerController *cameraViewController;
@property (weak, nonatomic) id<CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)childViewControllerForStatusBarHidden;
- (void)actionMenuControllerWillDismissActionMenu:(id)a0 animated:(BOOL)a1;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (BOOL)shouldAutorotate;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)record;
- (void)ckVideoRecorderRecordingCanceled:(id)a0;
- (void)ckVideoRecorder:(id)a0 imageDataCaptured:(id)a1 error:(id)a2;
- (void)ckVideoRecorder:(id)a0 videoCaptured:(id)a1 error:(id)a2;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)send;
- (void)_previewWarmedUp:(id)a0;
- (void)swapCamera:(id)a0;
- (void)_animateVideoIn;
- (void)cancelMenuItemAction:(id)a0;
- (void)photoMenuItemAction:(id)a0;
- (void)videoMenuItemAction:(id)a0;
- (void)_cameraOrientationChanged:(id)a0;
- (void)presentVideoActionMenuController;
- (void)stopRecordingWithCompletionBlock:(id /* block */)a0;
- (void)takePictureWithCompletionBlock:(id /* block */)a0;
- (void)_cleanupCamera;
- (id)initWithPresentationView:(id)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;

@end
