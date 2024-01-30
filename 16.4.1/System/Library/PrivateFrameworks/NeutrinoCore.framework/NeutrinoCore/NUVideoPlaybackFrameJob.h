@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)result;
- (id)initWithRequest:(id)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)renderer:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (id)frameRequest;
- (id)initWithVideoFrameRequest:(id)a0;
- (BOOL)shouldGenerateHDRMetadata;
- (BOOL)wantsOutputVideoFrame;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;

@end
