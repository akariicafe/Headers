@class NSManagedObjectContext, NSSet, NSMutableDictionary;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSMutableDictionary *_objectIDToAnalyzerStateCache;
}

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSSet *configuredEntityNames;

- (BOOL)reset:(id *)a0;
- (void)dealloc;
- (id)initWithOptions:(id)a0 managedObjectContext:(id)a1 store:(id)a2;
- (id)cloudKitAnalyzerOptions;
- (BOOL)finishProcessing:(id *)a0;
- (id)fetchSortedStates:(id *)a0;
- (BOOL)resetStateForObjectID:(id)a0 error:(id *)a1;
- (BOOL)processChange:(id)a0 error:(id *)a1;
- (id)analyzerStateForChangedObjectID:(id)a0 error:(id *)a1;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;

@end
