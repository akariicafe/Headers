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
- (id)initWithNativeVideoCodec:(const void *)a0;
- (struct VideoCodec { int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; unsigned int x8; unsigned char x9; struct SimulcastStream { int x0; int x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x10[3]; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x11[5]; int x12; BOOL x13; struct TimingFrameTriggerThresholds { long long x0; unsigned short x1; } x14; BOOL x15; union VideoCodecUnion { struct VideoCodecVP8 { unsigned char x0; BOOL x1; BOOL x2; int x3; } x0; struct VideoCodecVP9 { unsigned char x0; BOOL x1; int x2; BOOL x3; BOOL x4; unsigned char x5; BOOL x6; int x7; } x1; struct VideoCodecH264 { int x0; unsigned char x1; } x2; } x16; struct optional<webrtc::ScalabilityMode> { BOOL x0; union { unsigned char x0; struct dummy_type { struct empty_struct { } x0[1]; } x1; } x1; } x17; int x18; BOOL x19; })nativeVideoCodec;

@end
