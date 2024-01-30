@class AVCaptureSession, NSString, WFContentCollection, NSMutableArray;

@interface WFTakePhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface, AVCapturePhotoCaptureDelegate>

@property (nonatomic) BOOL showCameraPreview;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFContentCollection *outputCollection;
@property (nonatomic) unsigned long long remainingPhotos;
@property (retain, nonatomic) NSMutableArray *outputImages;
@property (retain, nonatomic) AVCaptureSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

+ (long long)cameraDeviceFromString:(id)a0;

- (void)finishWithError:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (BOOL)prefersModalPresentation;
- (void)showWithCameraPreview:(BOOL)a0 photoCount:(unsigned long long)a1 device:(id)a2 shortcutAttribution:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithUserInterfaceType:(id)a0 attribution:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)takePhotoOnDevice:(id)a0 shortcutAttribution:(id)a1;

@end
