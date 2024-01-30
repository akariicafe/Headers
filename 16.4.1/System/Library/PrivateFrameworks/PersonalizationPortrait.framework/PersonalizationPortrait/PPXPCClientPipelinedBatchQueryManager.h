@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject {
    _Atomic unsigned long long _queryId;
    NSMutableDictionary *_queryContexts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)assertBatch:(id)a0 forQueryName:(id)a1 hasExpectedContainedType:(Class)a2;

- (BOOL)syncExecuteQueryWithName:(id)a0 error:(id *)a1 queryInitializer:(id /* block */)a2 handleBatch:(id /* block */)a3;
- (void)handleReplyWithName:(id)a0 batch:(id)a1 isLast:(BOOL)a2 error:(id)a3 queryId:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)initWithName:(id)a0;
- (void)cancelPendingQueriesWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
