@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

@interface TSCH3DShaderCache : NSObject {
    NSMutableArray *_shaderCache;
}

@property (weak, nonatomic) id<TSCH3DProtectResourceDelegate> protectResourceDelegate;

- (void)flush;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)p_unprotectAllCacheItems;
- (void)p_ensureCacheLimit;
- (void)debug_verifyUniqueShadersInCache;

@end
