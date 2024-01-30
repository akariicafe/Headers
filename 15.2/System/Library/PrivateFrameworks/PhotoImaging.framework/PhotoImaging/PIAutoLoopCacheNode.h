@interface PIAutoLoopCacheNode : NUVideoCacheNode

+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)descriptionSubClassHook;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)outputSettings:(out id *)a0;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;

@end
