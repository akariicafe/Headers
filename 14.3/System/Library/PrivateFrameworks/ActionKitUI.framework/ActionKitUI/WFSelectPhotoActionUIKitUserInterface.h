@class NSString;

@interface WFSelectPhotoActionUIKitUserInterface : WFActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithPhotoPickerTypes:(id)a0 selectMultiple:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)finishWithOutput:(id)a0 error:(id)a1;

@end
