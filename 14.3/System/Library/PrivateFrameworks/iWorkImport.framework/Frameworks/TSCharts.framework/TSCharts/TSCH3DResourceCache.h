@class NSCountedSet, TSCH3DDictionaryOfSet, NSMutableDictionary;

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate> {
    TSCH3DDictionaryOfSet *mResourceKeyedEntries;
    NSMutableDictionary *mHandles;
    NSCountedSet *mProtectedResources;
    NSMutableDictionary *mMemoryUsage;
    NSCountedSet *mUsageCounts;
    unsigned long long mPeakMemoryUsedInBytes;
    BOOL mNeedToLogPeakMemory;
    BOOL mAnalyticsTestingEnabled;
}

@property (readonly, nonatomic) unsigned long long memoryUsedInBytes;
@property (nonatomic) unsigned long long memoryLimitInBytes;

- (id)init;
- (void)dealloc;
- (id)handleForKey:(id)a0;
- (id)keyForKey:(id)a0;
- (float)debug_totalMemoryUsageMB;
- (id)p_keysForResource:(id)a0;
- (id)debug_string;
- (BOOL)isProtectedResource:(id)a0;
- (void)p_flushHandleForKey:(id)a0 context:(id)a1;
- (void)p_removeHandleForKey:(id)a0;
- (id)p_allResourceKeys;
- (id)p_flushResourceKeys:(id)a0 context:(id)a1;
- (id)p_keysForResources:(id)a0;
- (id)p_unretainedResourcesFromResources:(id)a0;
- (void)p_logForAnalyticsIfNecessary;
- (void)garbageCollectResources:(id)a0 context:(id)a1;
- (id)debug_stats;
- (id)debug_countedMemory;
- (id)debug_countedClasses;
- (id)debug_usageCounts;
- (void)protectResource:(id)a0;
- (void)unprotectResource:(id)a0;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned long long)a0;
- (id)keyForLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;
- (void)setBytesUploaded:(unsigned long long)a0 forKey:(id)a1;
- (void)setHandle:(id)a0 forKey:(id)a1;
- (void)updateUsageCountForResourceSet:(id)a0 fromPreviousResourceSet:(id)a1;
- (id)flushAllResourcesForContext:(id)a0;
- (id)flushResources:(id)a0 context:(id)a1;
- (void)flushMemoryForResources:(id)a0;
- (void)garbageCollectAllResourcesForContext:(id)a0;
- (unsigned long long)memoryUsedForResource:(id)a0;
- (id)debug_details;

@end
