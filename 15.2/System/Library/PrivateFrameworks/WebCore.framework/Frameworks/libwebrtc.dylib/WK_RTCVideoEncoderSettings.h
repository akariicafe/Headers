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
- (struct VideoCodec { int x0; unsigned short x1; unsigned short x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; unsigned int x8; unsigned char x9; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x10[3]; struct SpatialLayer { unsigned short x0; unsigned short x1; float x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; } x11[5]; int x12; BOOL x13; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x14; struct TimingFrameTriggerThresholds { long long x0; unsigned short x1; } x15; BOOL x16; union VideoCodecUnion { struct VideoCodecVP8 { int x0; unsigned char x1; BOOL x2; BOOL x3; BOOL x4; int x5; } x0; struct VideoCodecVP9 { int x0; unsigned char x1; BOOL x2; BOOL x3; int x4; BOOL x5; BOOL x6; unsigned char x7; BOOL x8; int x9; } x1; struct VideoCodecH264 { BOOL x0; int x1; unsigned char x2; } x2; } x17; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x18; })nativeVideoCodec;

@end
