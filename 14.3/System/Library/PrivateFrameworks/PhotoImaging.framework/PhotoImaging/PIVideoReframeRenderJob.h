@class NSArray;

@interface PIVideoReframeRenderJob : NURenderJob

@property (readonly, copy, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (readonly, nonatomic) double confidence;

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (void)_writeDiagnosticFilesForReframer:(id)a0 metadata:(id)a1;
- (BOOL)_createStabilizedKeyframesFromReframer:(id)a0 videoTrack:(id)a1 viewRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 timedMetadata:(id)a3 error:(out id *)a4;
- (BOOL)_createKeyframesFromReframer:(id)a0 videoTrack:(id)a1 viewRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 timedMetadata:(id)a3 error:(out id *)a4;

@end
