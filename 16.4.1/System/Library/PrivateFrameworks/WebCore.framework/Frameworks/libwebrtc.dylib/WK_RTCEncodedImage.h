@class NSData, NSNumber;

@interface WK_RTCEncodedImage : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int encodedWidth;
@property (nonatomic) int encodedHeight;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) long long captureTimeMs;
@property (nonatomic) long long ntpTimeMs;
@property (nonatomic) unsigned char flags;
@property (nonatomic) long long encodeStartMs;
@property (nonatomic) long long encodeFinishMs;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) long long rotation;
@property (nonatomic) BOOL completeFrame;
@property (retain, nonatomic) NSNumber *qp;
@property (nonatomic) unsigned long long contentType;

- (struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *x0; })encodedData;
- (void).cxx_destruct;
- (void)setEncodedData:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *x0; })a0;
- (id)initWithNativeEncodedImage:(const void *)a0;
- (struct EncodedImage { unsigned int x0; unsigned int x1; long long x2; long long x3; int x4; int x5; unsigned char x6; int x7; struct VideoPlayoutDelay { int x0; int x1; } x8; struct Timing { unsigned char x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; } x9; struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *x0; } x10; unsigned long long x11; unsigned int x12; struct optional<int> { BOOL x0; union { int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x13; struct optional<int> { BOOL x0; union { int x0; struct dummy_type { struct empty_struct { } x0[4]; } x1; } x1; } x14; struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> { struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> { unsigned long long x0; } x2; } x0; } x15; struct optional<webrtc::ColorSpace> { BOOL x0; union { struct ColorSpace { unsigned char x0; unsigned char x1; unsigned char x2; int x3; int x4; int x5; struct optional<webrtc::HdrMetadata> { BOOL x0; union { struct HdrMetadata { struct HdrMasteringMetadata { struct Chromaticity { float x0; float x1; } x0; struct Chromaticity { float x0; float x1; } x1; struct Chromaticity { float x0; float x1; } x2; struct Chromaticity { float x0; float x1; } x3; float x4; float x5; } x0; int x1; int x2; } x0; struct dummy_type { struct empty_struct { } x0[48]; } x1; } x1; } x6; } x0; struct dummy_type { struct empty_struct { } x0[68]; } x1; } x1; } x16; struct optional<unsigned short> { BOOL x0; union { unsigned short x0; struct dummy_type { struct empty_struct { } x0[2]; } x1; } x1; } x17; struct RtpPacketInfos { struct scoped_refptr<webrtc::RtpPacketInfos::Data> { struct Data *x0; } x0; } x18; BOOL x19; BOOL x20; })nativeEncodedImage;

@end
