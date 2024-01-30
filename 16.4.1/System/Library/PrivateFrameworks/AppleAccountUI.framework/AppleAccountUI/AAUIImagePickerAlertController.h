@class NSString;

@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate>

@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithSelectionHandler:(id /* block */)a0;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)modalPresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentDocumentPickerAnimated:(BOOL)a0;
- (void)_callSelectionHandlerWithImage:(id)a0 cropRect:(id)a1;
- (void)_presentImagePickerAnimated:(BOOL)a0;
- (void)_presentImagePickerWithSourceType:(long long)a0 animated:(BOOL)a1;
- (void)_presentImageSourcePickerAnimated:(BOOL)a0;
- (id)_propertiesForImagePickerController:(id)a0;

@end
