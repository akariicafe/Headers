@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

@interface TSCH3DShaderCache : NSObject {
    NSMutableArray *mShaderCache;
}

@property (nonatomic) id<TSCH3DProtectResourceDelegate> protectResourceDelegate;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)flush;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)p_unprotectAllCacheItems;
- (void)p_ensureCacheLimit;
- (void)debug_verifyUniqueShadersInCache;

@end
