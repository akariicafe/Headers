@interface PIVideoCrossfadeLoopNode : NURenderNode

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopTimeRange;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } crossfadeDuration;

- (id)input;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateAudioMix:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)initWithInput:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 crossfadeDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
