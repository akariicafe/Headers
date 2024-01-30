@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderVTBVP9, WK_RTCVideoDecoderH265;

@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject {
    WK_RTCVideoDecoderH264 *m_h264Decoder;
    WK_RTCVideoDecoderH265 *m_h265Decoder;
    WK_RTCVideoDecoderVTBVP9 *m_vp9Decoder;
}

- (void).cxx_destruct;
- (void)setWidth:(unsigned short)a0 height:(unsigned short)a1;
- (long long)releaseDecoder;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(unsigned int)a2;
- (id)initH264DecoderWithCallback:(id /* block */)a0;
- (id)initH265DecoderWithCallback:(id /* block */)a0;
- (id)initVP9DecoderWithCallback:(id /* block */)a0;

@end
