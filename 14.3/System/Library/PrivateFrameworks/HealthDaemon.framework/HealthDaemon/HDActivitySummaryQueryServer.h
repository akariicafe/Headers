@class HDSQLitePredicate, HDActivitySummaryQueryHelper;

@interface HDActivitySummaryQueryServer : HDQueryServer {
    BOOL _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    BOOL _hasSentInitialResults;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (void)_queue_deliverErrorToClient:(id)a0;
- (void)_queue_deliverActivitySummariesToClient:(id)a0 isFinalBatch:(BOOL)a1 clearPendingBatches:(BOOL)a2;
- (void)_queue_deliverResultsWithActivitySummaries:(id)a0 isFinalBatch:(BOOL)a1 clearPendingBatches:(BOOL)a2 error:(id)a3;

@end
