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

- (int)_rebuildPrimaryFormatBufferPoolWithRequestedWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)nodeSubType;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (BOOL)blackFillingRequired;
- (id)nodeType;
- (int)_buildPrimaryFormatScalingSession;
- (id)_attachedMediaKeysThatRequireDifferentScalingThanPrimaryMediaSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 primaryMediaNormalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 primaryMediaRequestedOutputWidth:(unsigned long long)a2 primaryMediaRequestedOutputHeight:(unsigned long long)a3;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (int)_blackenBorderAttachedMediasOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 normalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 requestedSettings:(id)a2;
- (BOOL)_updateDNGDictionaryForZoomInSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sourceDimensions:(struct { int x0; int x1; })a1 denormalizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destDimensions:(struct { int x0; int x1; })a3;
- (void)_rebuildBufferPoolForAttachedMediaToProcess:(id)a0 primaryFormatWidth:(unsigned long long)a1 primaryFormatHeight:(unsigned long long)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (BOOL)_decompressionRequiredWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)initWithPoolCapacity:(int)a0;
- (void)_buildAttacedMediaScalingSession;
- (void)_purgeResourcesLeavingThemForMediaToProcess:(id)a0;
- (void)setBlackFillingRequired:(BOOL)a0;
- (int)_resolveScalerModeWithSettings:(id)a0 normalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 attachedMediaThatRequiresDifferentScalingThanPrimaryMedia:(id)a2 stillImageScalerModeOut:(int *)a3 scaledDenormalizedInputCropRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 mediaToProcessOut:(id *)a5;
- (void)dealloc;
- (int)_zoomAttachedMedia:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 requestedSettings:(id)a2;
- (int)_removeUnmodifiedAttachedMedias:(struct opaqueCMSampleBuffer { } *)a0;

@end
