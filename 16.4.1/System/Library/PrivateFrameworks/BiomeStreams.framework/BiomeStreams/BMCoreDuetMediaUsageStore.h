@class _CDClientContext;
@protocol _DKKnowledgeSaving;

@interface BMCoreDuetMediaUsageStore : NSObject <BMCoreDuetMediaUsageStore>

@property (readonly, nonatomic) id<_DKKnowledgeSaving> knowledgeStore;
@property (readonly, nonatomic) _CDClientContext *contextStore;

- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addContextValue:(id)a0 toArrayAtKeyPath:(id)a1;
- (BOOL)saveKnowledgeEvent:(id)a0 error:(id *)a1;

@end
