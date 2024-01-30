@class BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (id)etag;
- (long long)completedUnitCount;
- (void)close;
- (void).cxx_destruct;
- (long long)transferSize;
- (id)stageID;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;
- (long long)transferQOS;

@end
