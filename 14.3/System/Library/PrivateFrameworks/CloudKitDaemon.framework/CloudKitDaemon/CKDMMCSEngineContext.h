@class NSString, NSMutableIndexSet, CKDMMCS, NSObject, NSRunLoop;
@protocol OS_dispatch_semaphore;

@interface CKDMMCSEngineContext : NSObject

@property (nonatomic) long long refCount;
@property (nonatomic) long long state;
@property (nonatomic) BOOL stopMMCSThread;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { } *MMCSEngine;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs;

+ (id)_appID;
+ (id)sharedContextsQueue;
+ (BOOL)tearDownMMCSEngineWithContext:(id)a0;
+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)a0;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)a0 path:(id)a1 wasCached:(BOOL *)a2 error:(id *)a3;
+ (id)sharedContextsByPath;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)performOnRunLoop:(id /* block */)a0;
- (void)_MMCSTreadAbort;
- (void)_MMCSThread;
- (BOOL)_setupMMCSEngineWithError:(id *)a0;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)a0 path:(id)a1;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)a0 error:(id *)a1;
- (long long)decRefCount;
- (void)_tearDownMMCSEngine;
- (void)cancelRequestWithContext:(void *)a0;
- (unsigned long long)nextAvailableItemID;
- (void)stopTrackingItemID:(unsigned long long)a0;

@end
