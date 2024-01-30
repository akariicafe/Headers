@class NSString, BWFigVideoCaptureDevice;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject

@property (readonly, nonatomic) struct OpaqueFigCaptureSource { } *source;
@property (readonly, nonatomic) BWFigVideoCaptureDevice *device;
@property (readonly, nonatomic) NSString *nonLocalizedName;
@property (readonly, nonatomic) int deviceType;

- (void)dealloc;
- (id)initWithSource:(struct OpaqueFigCaptureSource { } *)a0 device:(id)a1;

@end
