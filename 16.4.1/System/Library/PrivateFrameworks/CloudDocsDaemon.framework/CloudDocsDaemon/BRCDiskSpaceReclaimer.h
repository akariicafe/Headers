@class br_pacer, NSString, BRCAccountSession, NSObject;
@protocol OS_dispatch_queue;

@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate> {
    BRCAccountSession *_session;
    br_pacer *_purgePacer;
    struct CacheDeleteToken { } *_purgeRequest;
    BOOL _isClosed;
    BOOL _computingPurgable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (double)_onDiskAccessTimeDeltaForUrgency:(int)a0;
+ (double)accessTimeDeltaForUrgency:(int)a0;
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)a0;

- (void)close;
- (id)initWithAccountSession:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)totalSize;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(id /* block */)a0;
- (long long)_dbSizeInBytes:(id)a0;
- (long long)cachedPurgeableSpaceForUrgency:(int)a0;
- (void)_asyncAutovacuumIfNeeds:(id)a0;
- (long long)_computeCiconiaSizeInBytes:(BOOL)a0;
- (long long)_dbAutovacuumableSpaceInBytes:(id)a0;
- (long long)_doIncrementalVacuum:(id)a0 amount:(long long)a1;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)a0 withTimeDelta:(double)a1 onDiskAccessTimeDelta:(double)a2;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)a0 withUrgency:(int)a1;
- (long long)_fullVacuumIfPossible:(id)a0;
- (long long)_purgeSpaceUnderQueue:(long long)a0 withUrgency:(int)a1;
- (unsigned long long)_recursivelySizeDirectoryAtPath:(id)a0;
- (void)_requestPurgeSpace;
- (void)_setupPurgePacer;
- (void)_updateNonPurgeableCachedSizeByAddingBytes:(long long)a0;
- (void)_updateNonPurgeableCachedSizeForDocument:(id)a0;
- (long long)_vacuumDB:(id)a0 amount:(long long)a1 withUrgency:(int)a2;
- (id)accessTimestampForDocument:(id)a0;
- (void)cachedPurgeableSpaceForAllUrgencies:(id *)a0 nonPurgeableSpace:(id *)a1 error:(id *)a2;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (void)didAccessDocument:(id)a0;
- (BOOL)documentUpdateEvictability:(id)a0;
- (BOOL)documentWasAccessedRecently:(id)a0;
- (BOOL)documentWasCreated:(id)a0;
- (BOOL)documentWasDeleted:(id)a0;
- (BOOL)documentWasUpdated:(id)a0 diffs:(unsigned long long)a1;
- (void)lowDiskStatusChangedForDevice:(int)a0 hasEnoughSpace:(BOOL)a1;
- (BOOL)overwriteDocumentAccessTime:(id)a0 atime:(unsigned long long)a1;
- (BOOL)performOptimizeStorageWithTimeDelta:(double)a0 onDiskAccessTimeDelta:(double)a1 error:(id *)a2;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)a0 withUrgency:(int)a1;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)a0;
- (void)requestPurgeSpace;
- (int)urgencyForCacheDeleteUrgency:(int)a0;

@end
