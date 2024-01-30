@class NSDictionary, MOVStreamEncoderConfig;

@interface MOVStreamOutputSettings : NSObject

@property (readonly) NSDictionary *settings;
@property (readonly) MOVStreamEncoderConfig *config;
@property (readonly) BOOL useCustomEncoderConfig;
@property (readonly) double expectedFrameRate;

+ (id)hevcColorSettingsLossless:(BOOL)a0 quality:(double)a1 bitsPerSecond:(unsigned long long)a2 bitDepth10:(BOOL)a3 chromaSampling:(long long)a4 frameRate:(double)a5 dimensions:(struct { int x0; int x1; })a6 enableAVEHighPerformanceProfile:(BOOL)a7;
+ (unsigned long long)applyBitrateModifiersTo:(unsigned long long)a0;
+ (id)audioSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0;
+ (long long)chromaSamplingEncoding:(int)a0;
+ (id)customEncoderSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)generalHEVCColorSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (unsigned long long)getBitsPerSecondForColorStream:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1;
+ (double)getQualitySetting:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0;
+ (id)h264Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc10bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc10bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc8bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc8bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc8bitWithAlphaLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevc8bitWithAlphaSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevcColorLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)hevcColorSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (BOOL)isBitDepth10Encoding:(int)a0;
+ (BOOL)isLosslessColorEncoding:(int)a0;
+ (int)matchDeprecatedType:(int)a0;
+ (id)outputSettingsForStream:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 defaultFrameRate:(double)a1 enableAVEHighPerformanceProfile:(BOOL)a2;
+ (id)prores422Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1;
+ (id)prores4444Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1;
+ (id)slimSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription *x0; BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; struct { long long x0; int x1; unsigned int x2; long long x3; } x16; unsigned long long x17; id x18; long long x19; } *)a0 frameRate:(double)a1;

- (id)initWithSettings:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrameRate:(double)a0;
- (id)initWithFrameRate:(double)a0 useCustomEncoderConfig:(BOOL)a1;

@end
