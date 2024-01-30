@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct OpaqueCMMemoryPool { } *_memoryPool;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
    BOOL _useAVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (void)flush;
- (void)setError:(int)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)configureDecompressionSession;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (void)destroyDecompressionSession;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (long long)setAVCFormat:(const char *)a0 size:(unsigned long long)a1 width:(unsigned short)a2 height:(unsigned short)a3;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (id)implementationName;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
