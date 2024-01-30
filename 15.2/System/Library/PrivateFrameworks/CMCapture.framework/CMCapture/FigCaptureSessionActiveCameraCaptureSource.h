@class NSString, BWFigVideoCaptureDevice;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {
    struct OpaqueFigCaptureSource { } *_source;
    BWFigVideoCaptureDevice *_device;
    NSString *_nonLocalizedName;
    int _deviceType;
}

- (void)dealloc;

@end
