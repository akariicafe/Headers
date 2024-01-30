@class NUDigest;
@protocol NUVideoProperties;

@interface NUVideoExportJob : NUExportJob

@property (retain, nonatomic) id<NUVideoProperties> videoProperties;
@property (retain, nonatomic) NUDigest *digest;

- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)initWithVideoExportRequest:(id)a0;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (id)renderer:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)writeVideoFrom:(id)a0 toWriter:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 createCustomMetadata:(BOOL)a3 geometryTransform:(id)a4 inputSize:(struct CGSize { double x0; double x1; })a5 outputSize:(struct CGSize { double x0; double x1; })a6 error:(out id *)a7;
- (id)generateVideoComposition:(out id *)a0;
- (id)initWithExportRequest:(id)a0;
- (BOOL)renderVideoFrames:(id)a0 videoMetadataSamples:(id)a1 intoPixelBuffer:(struct __CVBuffer { } *)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 colorSpace:(id)a4 error:(out id *)a5;
- (void)updateDigestWithRenderedFrame:(struct __CVBuffer { } *)a0;
- (id)videoExportRequest;

@end
