@class NSCountedSet, TSCH3DDictionaryOfSet, NSMutableDictionary;

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate> {
    TSCH3DDictionaryOfSet *_resourceKeyedEntries;
    NSMutableDictionary *_handles;
    NSCountedSet *_protectedResources;
    NSMutableDictionary *_memoryUsage;
    NSCountedSet *_usageCounts;
    unsigned long long _peakMemoryUsedInBytes;
    BOOL _needToLogPeakMemory;
    BOOL _analyticsTestingEnabled;
}

@property (readonly, nonatomic) unsigned long long memoryUsedInBytes;
@property (nonatomic) unsigned long long memoryLimitInBytes;

- (void)dealloc;
- (id)handleForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)debug_countedClasses;
- (id)debug_countedMemory;
- (id)debug_details;
- (id)debug_stats;
- (id)debug_string;
- (float)debug_totalMemoryUsageMB;
- (id)debug_usageCounts;
- (id)flushAllResourcesForContext:(id)a0;
- (void)flushMemoryForResources:(id)a0;
- (id)flushResources:(id)a0 context:(id)a1;
- (void)garbageCollectAllResourcesForContext:(id)a0;
- (void)garbageCollectResources:(id)a0 context:(id)a1;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned long long)a0;
- (BOOL)isProtectedResource:(id)a0;
- (id)keyForKey:(id)a0;
- (id)keyForLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;
- (unsigned long long)memoryUsedForResource:(id)a0;
- (id)p_allResourceKeys;
- (void)p_flushHandleForKey:(id)a0 context:(id)a1;
- (id)p_flushResourceKeys:(id)a0 context:(id)a1;
- (id)p_keysForResource:(id)a0;
- (id)p_keysForResources:(id)a0;
- (void)p_logForAnalyticsIfNecessary;
- (void)p_removeHandleForKey:(id)a0;
- (id)p_unretainedResourcesFromResources:(id)a0;
- (void)protectResource:(id)a0;
- (void)setBytesUploaded:(unsigned long long)a0 forKey:(id)a1;
- (void)setHandle:(id)a0 forKey:(id)a1;
- (void)unprotectResource:(id)a0;
- (void)updateUsageCountForResourceSet:(id)a0 fromPreviousResourceSet:(id)a1;

@end
