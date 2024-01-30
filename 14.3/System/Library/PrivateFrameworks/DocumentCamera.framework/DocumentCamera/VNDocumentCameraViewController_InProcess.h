@class NSString, ICDocCamViewController;

@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController <ICDocCamViewControllerDelegate>

@property (retain, nonatomic) ICDocCamViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (BOOL)documentCameraController:(id)a0 canAddImages:(unsigned long long)a1;
- (void)documentCameraControllerDidCancel:(id)a0;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:(id)a0;
- (void)documentCameraController:(id)a0 didFinishWithImage:(id)a1;
- (void)documentCameraController:(id)a0 didFinishWithDocInfoCollection:(id)a1 imageCache:(id)a2 warnUser:(BOOL)a3;

@end
