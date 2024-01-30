@class FigCaptureSourceFormat, NSArray, NSDictionary;

@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMaxFrameDuration;
    NSDictionary *fcSourceAttributes;
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *supportedDepthDataFormats;
    BOOL backgroundBlurSupported;
    NSArray *supportedMaxPhotoDimensions;
    BOOL studioLightingSupported;
    BOOL isDepthDataFormat;
}

@end
