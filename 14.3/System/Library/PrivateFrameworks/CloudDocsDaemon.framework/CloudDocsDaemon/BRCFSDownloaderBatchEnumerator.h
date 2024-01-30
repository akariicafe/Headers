@class BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (void)close;
- (void).cxx_destruct;
- (long long)completedUnitCount;
- (id)stageID;
- (id)etag;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;

@end
