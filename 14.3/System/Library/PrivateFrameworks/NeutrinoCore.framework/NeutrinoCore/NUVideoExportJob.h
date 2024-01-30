@interface NUVideoExportJob : NUExportJob {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _livePhotoKeyFrameTime;
}

- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)renderer:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (BOOL)wantsOutputGeometry;
- (id)scalePolicy;
- (id)initWithVideoExportRequest:(id)a0;
- (id)initWithExportRequest:(id)a0;
- (id)videoExportRequest;
- (BOOL)wantsOutputVideo;
- (id)generateVideoComposition:(out id *)a0;
- (BOOL)writeVideoFrom:(id)a0 toWriter:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 createCustomMetadata:(BOOL)a3 geometryTransform:(id)a4 inputSize:(struct CGSize { double x0; double x1; })a5 outputSize:(struct CGSize { double x0; double x1; })a6 error:(out id *)a7;

@end
