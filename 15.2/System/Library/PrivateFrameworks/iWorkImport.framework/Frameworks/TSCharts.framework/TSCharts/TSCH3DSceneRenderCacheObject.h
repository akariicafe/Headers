@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {
    BOOL _cachingEnabled;
    NSMutableArray *_dynamicResources;
    NSMutableArray *_childCacheObjects;
}

@property (nonatomic) BOOL cachingEnabled;

+ (id)cacheObject;

- (id)resourceAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)flushCache;
- (id)init;
- (unsigned long long)resourceCount;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (int)p_resourceUpdateFlag;
- (void)p_updateResourceUpdateFlags:(int)a0;
- (id)resourceAtIndex:(unsigned long long)a0 created:(BOOL *)a1 ifAbsent:(id /* block */)a2;
- (id)childCacheObjectAtIndex:(unsigned long long)a0;

@end
