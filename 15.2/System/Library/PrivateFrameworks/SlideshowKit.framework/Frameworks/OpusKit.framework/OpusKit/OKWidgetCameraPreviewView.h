@class AVCaptureSession;

@interface OKWidgetCameraPreviewView : OFUIView

@property (nonatomic) AVCaptureSession *session;

+ (Class)layerClass;

- (void)dealloc;

@end
