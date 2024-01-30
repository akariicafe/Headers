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
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)_purgeResourcesLeavingThemForMediaToProcess:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)_attachedMediaKeysThatRequireDifferentScalingThanPrimaryMediaSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 primaryMediaNormalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 primaryMediaRequestedOutputWidth:(unsigned long long)a2 primaryMediaRequestedOutputHeight:(unsigned long long)a3 requestedScaleFactor:(float)a4;
- (void)dealloc;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (int)_rebuildPrimaryFormatBufferPoolWithRequestedWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setBlackFillingRequired:(BOOL)a0;
- (void)_buildAttacedMediaScalingSession;
- (int)_blackenBorderAttachedMediasOnSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 normalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 requestedSettings:(id)a2 scaleFactor:(float)a3;
- (BOOL)blackFillingRequired;
- (void)_rebuildBufferPoolForAttachedMediaToProcess:(id)a0 primaryFormatWidth:(unsigned long long)a1 primaryFormatHeight:(unsigned long long)a2;
- (int)_buildPrimaryFormatScalingSession;
- (int)_resolveScalerModeWithSettings:(id)a0 normalizedInputCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scaleFactor:(float)a2 attachedMediaThatRequiresDifferentScalingThanPrimaryMedia:(id)a3 stillImageScalerModeOut:(int *)a4 scaledDenormalizedInputCropRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5 mediaToProcessOut:(id *)a6;
- (int)_removeUnmodifiedAttachedMedias:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_decompressionRequiredWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)_updateDNGDictionaryForZoomInSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sourceDimensions:(struct { int x0; int x1; })a1 denormalizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destDimensions:(struct { int x0; int x1; })a3;
- (id)initWithPoolCapacity:(int)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (int)_zoomAttachedMedia:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 requestedSettings:(id)a2 scaleFactor:(float)a3;

@end
