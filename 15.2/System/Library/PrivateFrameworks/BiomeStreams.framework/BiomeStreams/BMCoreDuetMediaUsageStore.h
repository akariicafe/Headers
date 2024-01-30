@class _CDClientContext;
@protocol _DKKnowledgeSaving;

@interface BMCoreDuetMediaUsageStore : NSObject <BMCoreDuetMediaUsageStore>

@property (readonly, nonatomic) id<_DKKnowledgeSaving> knowledgeStore;
@property (readonly, nonatomic) _CDClientContext *contextStore;

- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addContextValue:(id)a0 toArrayAtKeyPath:(id)a1;
- (BOOL)saveKnowledgeEvent:(id)a0 error:(id *)a1;

@end
