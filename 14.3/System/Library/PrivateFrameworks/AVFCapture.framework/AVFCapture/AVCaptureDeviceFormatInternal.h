@class FigCaptureSourceFormat, NSArray;

@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMaxFrameDuration;
    NSArray *supportedDepthDataFormats;
}

@end
