@class NSString, ICDocCamViewController;

@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate>

@property (retain, nonatomic) ICDocCamViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (id)initWithDelegate:(id)a0;
- (BOOL)documentCameraController:(id)a0 canAddImages:(unsigned long long)a1;
- (void)documentCameraControllerDidCancel:(id)a0;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:(id)a0;
- (void)documentCameraController:(id)a0 didFinishWithImage:(id)a1;
- (void)documentCameraController:(id)a0 didFinishWithDocInfoCollection:(id)a1 imageCache:(id)a2 warnUser:(BOOL)a3;

@end
