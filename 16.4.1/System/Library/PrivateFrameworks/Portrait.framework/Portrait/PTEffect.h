@class PTFaceAttributesNetwork, PTEffectResources, NSString, PTHumanDetections, NSObject;
@protocol MTLCommandQueue, PTEffectImpl, OS_dispatch_queue;

@interface PTEffect : NSObject {
    id<PTEffectImpl> _delegate;
    id<MTLCommandQueue> _metalCommandQueue;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    BOOL _asynchronous;
    int _frameId;
    long long _effectType;
    long long _effectTypeNew;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    PTEffectResources *_resources;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
    BOOL _asyncInitialization;
    BOOL _prewarmOnly;
    long long _effectQuality;
    long long _effectQualityNew;
    long long _debugType;
    PTHumanDetections *_humanDetections;
    double _lastFrameTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property long long effectQuality;

+ (int)prewarmForMediaserverd;
+ (void)disableAsynchronousWork;
+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(unsigned long long)a2;

- (void)setDebug:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (int)setEffectType:(unsigned long long)a0;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 effectQuality:(long long)a4;
- (int)render:(struct __CVBuffer { } *)a0 detectedObjects:(const struct __CFDictionary { } *)a1 toColorBuffer:(struct __CVBuffer { } *)a2;
- (int)render:(struct __CVBuffer { } *)a0 detectedObjects:(const struct __CFDictionary { } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 toColorBuffer:(struct __CVBuffer { } *)a3;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 prewarmOnly:(BOOL)a4 effectQuality:(long long)a5;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(unsigned long long)a2;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(unsigned long long)a2 effectQuality:(long long)a3;
- (void)keepOldDelegateAlive:(id)a0;
- (int)render:(struct __CVBuffer { } *)a0 disparity:(struct __CVBuffer { } *)a1 detectedObjects:(const struct __CFDictionary { } *)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 toColorBuffer:(struct __CVBuffer { } *)a4;
- (int)updateEffectDelegate:(BOOL)a0;
- (int)waitForAsyncInitialization;

@end
