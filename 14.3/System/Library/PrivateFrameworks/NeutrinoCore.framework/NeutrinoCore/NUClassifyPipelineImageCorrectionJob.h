@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (id)initWithRequest:(id)a0;
- (id)result;
- (id)cacheKey;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)a0;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
