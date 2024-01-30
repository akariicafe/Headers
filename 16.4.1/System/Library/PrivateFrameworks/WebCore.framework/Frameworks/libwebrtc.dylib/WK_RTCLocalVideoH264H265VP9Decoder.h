@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderVTBVP9, WK_RTCVideoDecoderH265;

@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject {
    WK_RTCVideoDecoderH264 *m_h264Decoder;
    WK_RTCVideoDecoderH265 *m_h265Decoder;
    WK_RTCVideoDecoderVTBVP9 *m_vp9Decoder;
}

- (void)flush;
- (void).cxx_destruct;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (long long)releaseDecoder;
- (void)setWidth:(unsigned short)a0 height:(unsigned short)a1;
- (id)initH264DecoderWithCallback:(id /* block */)a0;
- (id)initH265DecoderWithCallback:(id /* block */)a0;
- (id)initVP9DecoderWithCallback:(id /* block */)a0;
- (long long)setFormat:(const char *)a0 size:(unsigned long long)a1 width:(unsigned short)a2 height:(unsigned short)a3;

@end
