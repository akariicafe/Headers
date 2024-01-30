@class NSObject, ARImageScalingTechnique;
@protocol OS_dispatch_queue;

@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique {
    BOOL _enableDoubleMLResolutionForIPad;
    ARImageScalingTechnique *_mattingImageScalingTechnique;
    struct __CVPixelBufferPool { } *_bgraMattingPixelBufferPool;
    struct vImageCVImageFormat { } *_cvImageFormatRef;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
}

- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (id)_generateMattingMetadata:(id)a0;
- (id)_convertImageColorSpace:(id)a0 pPoolToUse:(struct __CVPixelBufferPool **)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
