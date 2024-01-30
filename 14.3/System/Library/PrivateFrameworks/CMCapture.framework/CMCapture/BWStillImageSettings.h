@class BWStillImageCaptureSettings, BWStillImageProcessingSettings, FigCaptureStillImageSettings;

@interface BWStillImageSettings : NSObject

@property (readonly, nonatomic) FigCaptureStillImageSettings *requestedSettings;
@property (readonly, nonatomic) BWStillImageCaptureSettings *captureSettings;
@property (readonly, nonatomic) BWStillImageProcessingSettings *processingSettings;

- (id)initWithRequestedSettings:(id)a0 captureSettings:(id)a1 processingSettings:(id)a2;
- (void)dealloc;

@end
