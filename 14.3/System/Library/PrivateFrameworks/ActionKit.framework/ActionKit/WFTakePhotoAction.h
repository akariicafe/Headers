@class NSString, AVCaptureSession;

@interface WFTakePhotoAction : WFAction <AVCapturePhotoCaptureDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic) unsigned long long remainingPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (void)takePhoto;

@end
