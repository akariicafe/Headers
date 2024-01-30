@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode

+ (int)fadeLengthForTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (id)_evaluateVideo:(out id *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_conformTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_evaluateAudioMix:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

@end
