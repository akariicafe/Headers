@class BWVideoFormat;

@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) int version;
@property (nonatomic) int type;

+ (int)deepZoomProcessingModeForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 type:(int)a1 sensorConfiguration:(id)a2;
+ (int)deepZoomProcessingModeForPixelBuffer:(struct __CVBuffer { } *)a0 type:(int)a1 sensorConfiguration:(id)a2 stillImageSettings:(id)a3;
+ (BOOL)doDeepZoomForPixelBuffer:(struct __CVBuffer { } *)a0 type:(int)a1 sensorConfiguration:(id)a2 metadata:(id)a3 stillImageSettings:(id)a4 intermediateZoomSrcRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5 intermediateZoomDstRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
+ (BOOL)doDeepZoomForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 type:(int)a1 sensorConfiguration:(id)a2 intermediateZoomSrcRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 intermediateZoomDstRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;

- (void)dealloc;

@end
