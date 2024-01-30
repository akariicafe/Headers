@class NSDictionary, MOVStreamEncoderConfig;

@interface MOVStreamOutputSettings : NSObject

@property (readonly) NSDictionary *settings;
@property (readonly) MOVStreamEncoderConfig *config;
@property (readonly) BOOL useCustomEncoderConfig;
@property (readonly) double expectedFrameRate;

+ (id)outputSettingsForStream:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 defaultFrameRate:(double)a1;
+ (int)matchDeprecatedType:(int)a0;
+ (id)slimSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)h264Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc8bitWithAlphaSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc8bitWithAlphaLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevcColorSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc8bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc8bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevcColorLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc10bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)hevc10bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)prores422Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)prores4444Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (id)audioSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0;
+ (id)customEncoderSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (unsigned long long)getBitsPerSecondForColorStream:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; struct __CVPixelBufferPool *x11; id x12; id x13; id x14; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; unsigned long long x16; id x17; long long x18; } *)a0 frameRate:(double)a1;
+ (unsigned long long)applyBitrateModifiersTo:(unsigned long long)a0;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)initWithFrameRate:(double)a0;
- (id)initWithFrameRate:(double)a0 useCustomEncoderConfig:(BOOL)a1;

@end
