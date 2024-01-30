@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (void)overrideMailHitCounts:(id)a0;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (id)protectionClass;
- (void)cancelQueryTasks;
- (void)_didReceiveResultsBatchCompletion;
- (id)initWithConnection:(id)a0;
- (void)cancelQueryTask:(long long)a0;
- (BOOL)searchInternal;
- (id)allowedBundleIDs;
- (id)bundleID;
- (void).cxx_destruct;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)dealloc;
- (id)queryTask:(long long)a0;

@end
