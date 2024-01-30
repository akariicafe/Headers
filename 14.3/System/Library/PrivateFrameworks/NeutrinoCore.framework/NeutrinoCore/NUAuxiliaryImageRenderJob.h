@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
}

@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (id)result;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;

@end
