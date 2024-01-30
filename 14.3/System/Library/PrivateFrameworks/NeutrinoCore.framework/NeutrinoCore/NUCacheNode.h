@class NSError, NSString, NUSourceNode, NURenderNode, NSObject, NURenderContext;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NUCacheNode : NURenderNode {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NURenderContext *_renderContext;
    NUSourceNode *_sourceNode;
    NSError *_sourceError;
}

@property (retain) NSString *cachedCacheIdentifier;
@property (readonly, nonatomic) NSString *cacheIdentifier;
@property (readonly, nonatomic) long long subsampleFactor;
@property (readonly, nonatomic) NURenderNode *inputNode;

+ (id)registry;
+ (id)cacheDirectoryURL;
+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
+ (void)_ensureCacheDirectoryURL:(id)a0;
+ (void)_pruneCacheDirectory:(id)a0 toSize:(long long)a1;
+ (long long)_maxCacheDirectorySize;
+ (void)clearCacheDirectory;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (BOOL)isResolved;
- (id)persistentURL;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)_evaluateImageGeometry:(out id *)a0;
- (void)nu_updateDigest:(id)a0;
- (id)_evaluateVideo:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (BOOL)requiresAudioMix;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)_evaluateImage:(out id *)a0;
- (long long)sampleMode;
- (id)_evaluateVideoComposition:(out id *)a0;
- (BOOL)isEqualToRenderNode:(id)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithInput:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)descriptionSubClassHook;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (void)resolveWithSourceNode:(id)a0 error:(id)a1;
- (void)_resolveWithSourceNode:(id)a0 error:(id)a1;
- (id)resolvedSourceNode:(out id *)a0;
- (id)persistentURLPrefix;
- (id)temporaryURLPrefix;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (BOOL)installTemporaryURL:(id)a0 intoPersistentURL:(id)a1 error:(out id *)a2;
- (void)resolveSourceWithResponse:(id)a0;

@end
