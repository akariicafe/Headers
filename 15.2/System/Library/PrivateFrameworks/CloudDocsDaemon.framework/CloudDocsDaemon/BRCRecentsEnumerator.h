@class br_pacer, NSString, BRCAccountSession, NSObject, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCRecentsEnumerator : NSObject <BRCModule> {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    BOOL _readyForIndexing;
    unsigned long long _flushedNotifRank;
    brc_task_tracker *_tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

+ (void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(id /* block */)a0;
+ (void)dropRecentsForSession:(id)a0 completionHandler:(id /* block */)a1;

- (void)close;
- (void)maxNotifRankWasFlushed;
- (void)_deleteAllRanks;
- (id)initWithAccountSession:(id)a0;
- (id)changeTokenForNotifRank:(unsigned long long)a0;
- (void)garbageCollectRanksPreceding:(unsigned long long)a0;
- (void)_activeSetDidChange;
- (void)dropIndexForClientZone:(id)a0;
- (void)_enumerateChangesFromChangeToken:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enumerateChangesFromChangeToken:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fileObjectID:(id)a0 isNoLongerIndexableForNotifRank:(unsigned long long)a1 itemIsLive:(BOOL)a2;
- (void)resume;
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (void)_handleResetForRowID:(long long)a0 notifRank:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_signalActiveSetDidChange;
- (void)dealloc;
- (void)cancel;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)a0;

@end
