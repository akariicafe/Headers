@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)initWithRequest:(id)a0;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)renderer:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)wantsOutputVideoFrame;
- (id)initWithVideoFrameRequest:(id)a0;
- (id)frameRequest;

@end
