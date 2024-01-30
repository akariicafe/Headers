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

@property (nonatomic) BOOL shouldOperateOnHighResolutionImages;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepare:(BOOL)a0;
- (id)_generateMattingMetadata:(id)a0;
- (void)_processDataInBackgound:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
