@class NSMutableDictionary, NSArray, NSMutableSet, NSPersistentHistoryToken, PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzerContext : NSObject {
    BOOL _isFinished;
    PFHistoryAnalyzerOptions *_options;
    NSMutableDictionary *_objectIDToState;
    NSArray *_sortedStates;
    NSMutableSet *_processedTransactionIDs;
    NSPersistentHistoryToken *_finalHistoryToken;
}

- (BOOL)processChange:(id)a0 error:(id *)a1;
- (BOOL)resetStateForObjectID:(id)a0 error:(id *)a1;
- (BOOL)finishProcessing:(id *)a0;
- (id)fetchSortedStates:(id *)a0;
- (BOOL)reset:(id *)a0;
- (id)analyzerStateForChangedObjectID:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)processTransaction:(id)a0 error:(id *)a1;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;
- (id)initWithOptions:(id)a0;

@end
