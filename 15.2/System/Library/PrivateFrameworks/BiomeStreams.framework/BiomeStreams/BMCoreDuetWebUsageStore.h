@class _CDClientContext;
@protocol _DKKnowledgeSaving;

@interface BMCoreDuetWebUsageStore : NSObject <BMCoreDuetWebUsageStore>

@property (readonly, nonatomic) id<_DKKnowledgeSaving> knowledgeStore;
@property (readonly, nonatomic) _CDClientContext *contextStore;

- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (void)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (void)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 responseQueue:(id)a3 withCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addContextValue:(id)a0 toArrayAtKeyPath:(id)a1;
- (BOOL)saveKnowledgeEvent:(id)a0 error:(id *)a1;

@end
