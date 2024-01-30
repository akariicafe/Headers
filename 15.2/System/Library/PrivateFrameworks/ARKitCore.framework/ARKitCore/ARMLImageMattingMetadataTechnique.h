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

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (id)_generateMattingMetadata:(id)a0;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
