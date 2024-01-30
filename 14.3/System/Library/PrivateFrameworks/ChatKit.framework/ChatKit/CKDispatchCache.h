@class NSCountedSet, NSMutableDictionary, CKDispatchQueue, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface CKDispatchCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) NSCache *objectCache;
@property (retain, nonatomic) NSCountedSet *pendingKeys;
@property (retain, nonatomic) NSMutableDictionary *pendingGroups;
@property (retain, nonatomic) CKDispatchQueue *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (nonatomic) long long dispatchPriority;

- (id)init;
- (void).cxx_destruct;
- (void)clearQueue;
- (void)dealloc;
- (void)emptyCache;
- (void)enqueueGenerationBlock:(id /* block */)a0 completion:(id /* block */)a1 withPriority:(long long)a2 forKey:(id)a3;
- (void)systemApplicationDidSuspend;
- (id)initWithCacheLimit:(unsigned long long)a0 dispatchPriority:(long long)a1;
- (void)beginGeneratingForKey:(id)a0;
- (void)_endGeneratingForKeyUnlocked:(id)a0;
- (BOOL)isGeneratingForKey:(id)a0;
- (void)_beginGeneratingForKeyUnlocked:(id)a0;
- (void)setCachedObject:(id)a0 forKey:(id)a1;
- (void)enqueueBlock:(id /* block */)a0 withPriority:(long long)a1;
- (void)endGeneratingForKey:(id)a0;
- (BOOL)waitOnGenerationForKey:(id)a0;
- (void)resume;
- (void)suspend;
- (id)cachedObjectForKey:(id)a0;

@end
