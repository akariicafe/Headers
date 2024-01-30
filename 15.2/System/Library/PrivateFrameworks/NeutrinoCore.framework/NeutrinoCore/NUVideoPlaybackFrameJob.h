@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)initWithRequest:(id)a0;
- (BOOL)render:(out id *)a0;
- (id)result;
- (BOOL)wantsCompleteStage;
- (id)renderer:(out id *)a0;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)wantsOutputVideoFrame;
- (id)initWithVideoFrameRequest:(id)a0;
- (id)frameRequest;

@end
