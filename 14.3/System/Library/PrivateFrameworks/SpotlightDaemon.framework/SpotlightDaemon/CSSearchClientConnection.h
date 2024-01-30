@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (BOOL)searchInternal;
- (id)bundleID;
- (void).cxx_destruct;
- (void)_didReceiveResultsBatchCompletion;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)dealloc;
- (void)cancelQueryTasks;
- (id)queryTask:(long long)a0;
- (id)initWithConnection:(id)a0;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)cancelQueryTask:(long long)a0;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (id)protectionClass;

@end
