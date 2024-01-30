@class NSString;

@interface WFSelectPhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithOutput:(id)a0 error:(id)a1;
- (void)showWithPhotoPickerTypes:(id)a0 selectMultiple:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
