@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct OpaqueCMMemoryPool { } *_memoryPool;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id /* block */)a0;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setError:(int)a0;
- (id)implementationName;
- (long long)startDecodeWithNumberOfCores:(int)a0;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (long long)releaseDecoder;
- (void)destroyDecompressionSession;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(unsigned int)a2;
- (int)resetDecompressionSession;
- (void)configureDecompressionSession;

@end
