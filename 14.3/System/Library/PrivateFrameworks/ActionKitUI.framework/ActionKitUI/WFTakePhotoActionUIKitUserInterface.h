@class NSString, WFContentCollection, NSMutableArray;

@interface WFTakePhotoActionUIKitUserInterface : WFActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFContentCollection *outputCollection;
@property (nonatomic) unsigned long long remainingPhotos;
@property (retain, nonatomic) NSMutableArray *outputImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cameraDeviceFromString:(id)a0;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithPhotoCount:(unsigned long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;

@end
