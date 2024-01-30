@class NSArray, OBTextWelcomeController, AIAudiogramIngestionEngine, NSString, AIAudiogramLoadingViewController;
@protocol AIAudiogramConfirmResultsViewControllerDelegate;

@interface AIAudiogramEnrollmentViewController : OBNavigationController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, VNDocumentCameraViewControllerDelegate, PHPickerViewControllerDelegate, UIDocumentPickerDelegate, AIAudiogramIngestionEngineDelegate>

@property (weak, nonatomic) id<AIAudiogramConfirmResultsViewControllerDelegate> audiogramConfirmationDelegate;
@property (retain, nonatomic) OBTextWelcomeController *validationFailedController;
@property (retain, nonatomic) AIAudiogramLoadingViewController *loadingController;
@property (nonatomic) BOOL isCameraAvailable;
@property (retain, nonatomic) AIAudiogramIngestionEngine *audiogramEngine;
@property (retain, nonatomic) NSArray *audiogramImages;
@property (nonatomic) BOOL analyticsIngestionAttempted;
@property (nonatomic) unsigned long long analyticsImportSource;
@property (nonatomic) unsigned long long analyticsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentCameraViewController:(id)a0 didFinishWithScan:(id)a1;
- (void)documentCameraViewControllerDidCancel:(id)a0;
- (void)documentCameraViewController:(id)a0 didFailWithError:(id)a1;
- (void)_cancelTapped:(id)a0;
- (void)audiogramIngestionEngineModelDownloadFailed:(id)a0;
- (void)audiogramIngestionEngineModelDownloadComplete;
- (void)audiogramIngestionEngineModelDownloadProgressed:(float)a0;
- (void)_showWelcome;
- (void)_importTapped:(id)a0;
- (void)_manuallyImportAudiogram;
- (void)_hideAnalyzingAudiogram;
- (void)_showResultsForAudiogram:(id)a0;
- (void)_openCameraTapped:(id)a0;
- (void)_openPhotosTapped:(id)a0;
- (void)_openDocumentsTapped:(id)a0;
- (void)_showDownloadingAudiogram;
- (void)_showAnalyzingAudiogram;
- (void)_importAudiogramImage;
- (void)_showValidationFailed;
- (void)_prepareToImportAudiogramImages:(id)a0;
- (id)_imagesFromPDF:(id)a0;

@end
