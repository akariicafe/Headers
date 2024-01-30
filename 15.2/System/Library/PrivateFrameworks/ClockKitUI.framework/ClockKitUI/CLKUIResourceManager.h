@class NSMutableDictionary, NSMutableArray;

@interface CLKUIResourceManager : NSObject {
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    unsigned long long _memoryUsed;
    NSMutableArray *_textureLoaderQueues;
}

+ (id)sharedInstance;

- (void)purge:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)purgeAllUnused;
- (void)_purgeAllUnconditionally;
- (id)_newAtlasForUuid:(id)a0;
- (void)_purgeAtlases:(id)a0;
- (id)_fetchOldestAtlas;
- (id)textureForUuid:(SEL)a0 delegate:(id)a1 rect:(id)a2;
- (id)borrowTextureLoadingQueue;
- (void)returnTextureLoadingQueue:(id)a0;
- (BOOL)memoryIsAvailable:(unsigned long long)a0;
- (BOOL)ensureMemoryAvailable:(unsigned long long)a0;
- (void)notifyAtlas:(id)a0 willChangeToMemoryCost:(unsigned long long)a1;
- (id)delegateForUuid:(id)a0;

@end
