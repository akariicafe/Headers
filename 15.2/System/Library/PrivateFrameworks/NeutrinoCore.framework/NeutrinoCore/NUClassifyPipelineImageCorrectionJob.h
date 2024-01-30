@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (id)initWithRequest:(id)a0;
- (id)cacheKey;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)a0;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
