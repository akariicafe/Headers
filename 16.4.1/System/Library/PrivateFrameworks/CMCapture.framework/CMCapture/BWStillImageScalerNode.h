@class BWPixelBufferPool, NSMutableDictionary, BWVideoFormat;

@interface BWStillImageScalerNode : BWNode {
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    BOOL _blackFillingRequired;
    NSMutableDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    NSMutableDictionary *_preparedVideoFormatByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    struct { int width; int height; } _resizedOutputDimensions;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBlackFillingRequired:(BOOL)a0;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (void)dealloc;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (BOOL)blackFillingRequired;
- (id)init;
- (id)initWithPoolCapacity:(int)a0;

@end
