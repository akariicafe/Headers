@class NSString;

@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate>

@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithSelectionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (long long)modalPresentationStyle;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)viewDidLoad;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentImagePickerAnimated:(BOOL)a0;
- (void)_presentDocumentPickerAnimated:(BOOL)a0;
- (void)_presentImageSourcePickerAnimated:(BOOL)a0;
- (void)_presentImagePickerWithSourceType:(long long)a0 animated:(BOOL)a1;
- (void)_callSelectionHandlerWithImage:(id)a0 cropRect:(id)a1;
- (id)_propertiesForImagePickerController:(id)a0;

@end
