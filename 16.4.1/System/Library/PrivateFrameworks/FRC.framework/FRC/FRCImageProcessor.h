@class NSObject, Normalization, FRCScaler;
@protocol OS_dispatch_semaphore;

@interface FRCImageProcessor : NSObject {
    long long _usage;
    Normalization *_normalization;
    FRCScaler *_scaler;
    struct __CVBuffer { } *_rgbaFirst;
    struct __CVBuffer { } *_rgbaSecond;
    BOOL _rgbaBuffersAllocated;
    unsigned int _rgbaPixelFormat;
    BOOL _isYUV;
    BOOL _inputScaling;
    unsigned long long _width;
    unsigned long long _height;
    struct { float mean; float std_inv; float anchor_mean[2]; float anchor_std[2]; int frame_type; } _normalizationParams;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    struct __CVPixelBufferPool { } *_denormalizedBufferPool;
}

@property (nonatomic) long long inputRotation;
@property (nonatomic) BOOL selfNormalization;
@property (readonly, nonatomic) struct __CVBuffer { } *normalizedFirst;
@property (readonly, nonatomic) struct __CVBuffer { } *normalizedSecond;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateNormalizedBuffers;
- (void)allocteRGBABuffersForBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithUsage:(long long)a0;
- (void)postProcessNormalizedFrame:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 timeScale:(float)a2 waitForCompletion:(BOOL)a3;
- (void)preProcessFirstInput:(struct __CVBuffer { } *)a0 secondInput:(struct __CVBuffer { } *)a1 waitForCompletion:(BOOL)a2;
- (BOOL)shouldCropOutputFrame:(struct __CVBuffer { } *)a0;
- (BOOL)shouldScaleBuffer:(struct __CVBuffer { } *)a0;

@end
