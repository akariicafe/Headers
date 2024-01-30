@class NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface RTDuetKnowledgeStore : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)resume;
- (void)executeQuery:(id)a0 withCompletion:(id /* block */)a1;

@end
