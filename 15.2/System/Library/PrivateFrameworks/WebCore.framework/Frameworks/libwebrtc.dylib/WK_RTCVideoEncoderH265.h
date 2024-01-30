@class NSString, WK_RTCVideoCodecInfo;

@interface WK_RTCVideoEncoderH265 : NSObject <RTCVideoEncoder> {
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> { struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> { struct BitrateAdjuster *__value_; } __ptr_; } _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    struct __CFString { } *_profile;
    id /* block */ _callback;
    int _width;
    int _height;
    struct OpaqueVTCompressionSession { } *_compressionSession;
    unsigned long long _mode;
    int framesLeft;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _nv12ScaleBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)implementationName;
- (long long)startEncodeWithSettings:(id)a0 numberOfCores:(int)a1;
- (long long)releaseEncoder;
- (long long)encode:(id)a0 codecSpecificInfo:(id)a1 frameTypes:(id)a2;
- (int)setBitrate:(unsigned int)a0 framerate:(unsigned int)a1;
- (id)scalingSettings;
- (id)initWithCodecInfo:(id)a0;
- (void)destroyCompressionSession;
- (void)configureCompressionSession;
- (int)resetCompressionSession;
- (void)setBitrateBps:(unsigned int)a0;
- (void)setEncoderBitrateBps:(unsigned int)a0;
- (void)frameWasEncoded:(int)a0 flags:(unsigned int)a1 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 width:(int)a3 height:(int)a4 renderTimeMs:(long long)a5 timestamp:(unsigned int)a6 rotation:(long long)a7;

@end
