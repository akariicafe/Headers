@class NSPersistentHistoryToken, NSMutableDictionary, NSMutableSet, NSArray, PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzerContext : NSObject {
    NSMutableDictionary *_objectIDToState;
    NSArray *_sortedStates;
}

@property (readonly, nonatomic) PFHistoryAnalyzerOptions *options;
@property (readonly, nonatomic) NSMutableSet *processedTransactionIDs;
@property (readonly, nonatomic) NSPersistentHistoryToken *finalHistoryToken;
@property (readonly, nonatomic) BOOL isFinished;

- (id)initWithOptions:(id)a0;
- (BOOL)reset:(id *)a0;
- (void)dealloc;
- (BOOL)finishProcessing:(id *)a0;
- (id)fetchSortedStates:(id *)a0;
- (BOOL)resetStateForObjectID:(id)a0 error:(id *)a1;
- (BOOL)processChange:(id)a0 error:(id *)a1;
- (id)analyzerStateForChangedObjectID:(id)a0 error:(id *)a1;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;
- (BOOL)processTransaction:(id)a0 error:(id *)a1;
- (BOOL)shouldPruneAnalyzerState:(id)a0;
- (void)processFinalState:(id)a0;

@end
