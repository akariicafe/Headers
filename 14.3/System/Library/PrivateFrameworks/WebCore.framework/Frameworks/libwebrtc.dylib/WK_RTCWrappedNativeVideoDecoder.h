@class NSString;

@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder> {
    struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> > { struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder> > { struct VideoDecoder *__value_; } __ptr_; } _wrappedDecoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> > { struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder> > { struct VideoDecoder *x0; } x0; })releaseWrappedDecoder;
- (id)implementationName;
- (long long)startDecodeWithNumberOfCores:(int)a0;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (long long)releaseDecoder;
- (id)initWithNativeDecoder:(struct unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> > { struct __compressed_pair<webrtc::VideoDecoder *, std::__1::default_delete<webrtc::VideoDecoder> > { struct VideoDecoder *x0; } x0; })a0;

@end
