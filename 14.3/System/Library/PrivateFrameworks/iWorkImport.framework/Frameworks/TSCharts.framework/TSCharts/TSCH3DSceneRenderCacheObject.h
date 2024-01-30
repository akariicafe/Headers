@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {
    BOOL mCachingEnabled;
    NSMutableArray *mDynamicResources;
    NSMutableArray *mChildCacheObjects;
}

@property (nonatomic) BOOL cachingEnabled;

+ (id)cacheObject;

- (id)init;
- (id)resourceAtIndex:(unsigned long long)a0;
- (unsigned long long)resourceCount;
- (void)dealloc;
- (void)flushCache;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (int)p_resourceUpdateFlag;
- (void)p_updateResourceUpdateFlags:(int)a0;
- (id)resourceAtIndex:(unsigned long long)a0 created:(BOOL *)a1 ifAbsent:(id /* block */)a2;
- (id)childCacheObjectAtIndex:(unsigned long long)a0;

@end
