@class NSString;

@interface WFTakeVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakeVideoActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

+ (long long)qualityFromString:(id)a0;
+ (long long)cameraDeviceFromString:(id)a0;

- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithOutput:(id)a0 error:(id)a1;
- (void)showWithQuality:(id)a0 device:(id)a1 startImmediately:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
