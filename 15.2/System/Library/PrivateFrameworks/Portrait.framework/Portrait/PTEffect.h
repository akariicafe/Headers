@protocol MTLCommandQueue;

@interface PTEffect : NSObject {
    PTEffect *_delegate;
    id<MTLCommandQueue> _metalCommandQueue;
    BOOL _asynchronous;
    int _frameId;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

@property long long effectQuality;

+ (int)prewarmForMediaserverd;
+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2;
- (int)render:(struct __CVBuffer { } *)a0 detectedObjects:(const struct __CFDictionary { } *)a1 toColorBuffer:(struct __CVBuffer { } *)a2;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(long long)a2 effectQuality:(long long)a3;

@end
