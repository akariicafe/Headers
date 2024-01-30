@class NSString, WK_RTCVideoCodecInfo;

@interface WK_RTCVideoEncoderH264 : NSObject <RTCVideoEncoder> {
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> { struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> { struct BitrateAdjuster *__value_; } __ptr_; } _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned int _encoderFrameRate;
    unsigned int _maxAllowedFrameRate;
    unsigned long long _packetizationMode;
    struct optional<webrtc::H264ProfileLevelId> { union { char __null_state_; struct H264ProfileLevelId { int profile; int level; } __val_; } ; BOOL __engaged_; } _profile_level_id;
    id /* block */ _callback;
    int _width;
    int _height;
    BOOL _useVCP;
    BOOL _useBaseline;
    struct OpaqueVTCompressionSession { } *_vtCompressionSession;
    void *_vcpCompressionSession;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    unsigned long long _mode;
    struct H264BitstreamParser { void /* function */ **_vptr$BitstreamParser; struct optional<webrtc::SpsParser::SpsState> { union { char __null_state_; struct SpsState { unsigned int width; unsigned int height; unsigned int delta_pic_order_always_zero_flag; unsigned int separate_colour_plane_flag; unsigned int frame_mbs_only_flag; unsigned int log2_max_frame_num; unsigned int log2_max_pic_order_cnt_lsb; unsigned int pic_order_cnt_type; unsigned int max_num_ref_frames; unsigned int vui_params_present; unsigned int id; } __val_; } ; BOOL __engaged_; } sps_; struct optional<webrtc::PpsParser::PpsState> { union { char __null_state_; struct PpsState { BOOL bottom_field_pic_order_in_frame_present_flag; BOOL weighted_pred_flag; BOOL entropy_coding_mode_flag; unsigned int weighted_bipred_idc; unsigned int redundant_pic_cnt_present_flag; int pic_init_qp_minus26; unsigned int id; unsigned int sps_id; } __val_; } ; BOOL __engaged_; } pps_; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } last_slice_qp_delta_; } _h264BitstreamParser;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _frameScaleBuffer;
    BOOL _disableEncoding;
    BOOL _isKeyFrameRequired;
    BOOL _isH264LowLatencyEncoderEnabled;
    BOOL _isUsingSoftwareEncoder;
    BOOL _isBelowExpectedFrameRate;
    unsigned int _frameCount;
    long long _lastFrameRateEstimationTime;
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
- (void)setH264LowLatencyEncoderEnabled:(BOOL)a0;
- (void)destroyCompressionSession;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)a0;
- (BOOL)hasCompressionSession;
- (BOOL)resetCompressionSessionIfNeededWithFrame:(id)a0;
- (void)updateBitRateAccordingActualFrameRate;
- (void)setBitrateBps:(unsigned int)a0 frameRate:(unsigned int)a1;
- (unsigned int)pixelFormatOfFrame:(id)a0;
- (void)configureCompressionSession;
- (void)setEncoderBitrateBps:(unsigned int)a0 frameRate:(unsigned int)a1;
- (void)frameWasEncoded:(int)a0 flags:(unsigned int)a1 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 codecSpecificInfo:(id)a3 width:(int)a4 height:(int)a5 renderTimeMs:(long long)a6 timestamp:(unsigned int)a7 rotation:(long long)a8 isKeyFrameRequired:(BOOL)a9;

@end
