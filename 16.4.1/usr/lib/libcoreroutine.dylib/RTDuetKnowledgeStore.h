@class _DKKnowledgeStore, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface RTDuetKnowledgeStore : NSObject

@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStoreQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)resume;
- (void)executeQuery:(id)a0 completion:(id /* block */)a1;
- (void)clearEventsFromStream:(id)a0 completion:(id /* block */)a1;
- (void)saveEvents:(id)a0 completion:(id /* block */)a1;

@end
