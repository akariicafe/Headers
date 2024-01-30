@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderH265;

@interface WK_RTCLocalVideoH264H265Decoder : NSObject {
    WK_RTCVideoDecoderH264 *m_h264Decoder;
    WK_RTCVideoDecoderH265 *m_h265Decoder;
}

- (void).cxx_destruct;
- (long long)releaseDecoder;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(unsigned int)a2;
- (id)initH264DecoderWithCallback:(id /* block */)a0;
- (id)initH265DecoderWithCallback:(id /* block */)a0;

@end
