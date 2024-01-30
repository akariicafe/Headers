@class AVCaptureDeviceFormat, AVCaptureDevice;

@interface AXMCaptureSettings : NSObject

@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureDeviceFormat *captureFormat;

- (void).cxx_destruct;

@end
