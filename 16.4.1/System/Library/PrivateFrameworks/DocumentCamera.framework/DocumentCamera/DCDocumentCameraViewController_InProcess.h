@class NSString, UIViewController;

@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate>

@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_autoDismiss;
- (id)scanDataDelegateWithIdentifier:(id)a0;
- (BOOL)documentCameraController:(id)a0 canAddImages:(unsigned long long)a1;
- (void)documentCameraController:(id)a0 didFinishWithDocInfoCollection:(id)a1 imageCache:(id)a2 warnUser:(BOOL)a3;
- (void)documentCameraController:(id)a0 didFinishWithImage:(id)a1;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)a0;
- (void)remoteDocumentCameraController:(id)a0 didFailWithError:(id)a1;
- (void)remoteDocumentCameraController:(id)a0 didFinishWithInfoCollection:(id)a1;
- (void)remoteDocumentCameraControllerDidCancel:(id)a0;

@end
