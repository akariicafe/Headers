@class NSString;

@interface WK_RTCVideoEncoderSettings : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned short width;
@property (nonatomic) unsigned short height;
@property (nonatomic) unsigned int startBitrate;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic) unsigned int minBitrate;
@property (nonatomic) unsigned int maxFramerate;
@property (nonatomic) unsigned int qpMax;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (id)initWithNativeVideoCodec:(const struct VideoCodec { int x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; unsigned int x9; unsigned char x10; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x11[3]; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x12[5]; int x13; BOOL x14; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x15; struct TimingFrameTriggerThresholds { long long x0; unsigned short x1; } x16; union VideoCodecUnion { struct VideoCodecVP8 { int x0; unsigned char x1; BOOL x2; BOOL x3; BOOL x4; int x5; } x0; struct VideoCodecVP9 { int x0; unsigned char x1; BOOL x2; BOOL x3; int x4; BOOL x5; BOOL x6; unsigned char x7; BOOL x8; int x9; } x1; struct VideoCodecH264 { BOOL x0; int x1; unsigned char x2; } x2; struct VideoCodecH265 { BOOL x0; int x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; char *x6; unsigned long long x7; } x3; } x17; } *)a0;
- (struct VideoCodec { int x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; unsigned int x9; unsigned char x10; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x11[3]; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x12[5]; int x13; BOOL x14; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x15; struct TimingFrameTriggerThresholds { long long x0; unsigned short x1; } x16; union VideoCodecUnion { struct VideoCodecVP8 { int x0; unsigned char x1; BOOL x2; BOOL x3; BOOL x4; int x5; } x0; struct VideoCodecVP9 { int x0; unsigned char x1; BOOL x2; BOOL x3; int x4; BOOL x5; BOOL x6; unsigned char x7; BOOL x8; int x9; } x1; struct VideoCodecH264 { BOOL x0; int x1; unsigned char x2; } x2; struct VideoCodecH265 { BOOL x0; int x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; char *x6; unsigned long long x7; } x3; } x17; })nativeVideoCodec;

@end
