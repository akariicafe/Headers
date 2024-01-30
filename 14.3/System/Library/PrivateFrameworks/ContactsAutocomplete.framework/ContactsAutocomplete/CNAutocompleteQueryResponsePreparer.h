@class NSObject, CNAutocompleteFetchRequest, NSMutableOrderedSet;
@protocol CNPromise, CNFuture, CNAutocompleteFetchDelegate, OS_dispatch_queue;

@interface CNAutocompleteQueryResponsePreparer : NSObject {
    NSMutableOrderedSet *_previouslyReturnedResults;
    NSObject<OS_dispatch_queue> *_duetSortQueue;
}

@property (readonly, weak, nonatomic) id<CNAutocompleteFetchDelegate> delegate;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest;
@property (retain, nonatomic) id<CNFuture> priorityResultsFuture;
@property (retain, nonatomic) id<CNPromise> matchingPriorityResultsPromise;

+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)sortResults;
- (id)initWithDelegate:(id)a0 fetchRequest:(id)a1;
- (id)addDiagnosticLog:(id /* block */)a0;
- (id)askDelegateToAdjustResults;
- (id)suppressResultsWithAddresses:(id)a0;
- (id)prepareResults:(id)a0;
- (id)findUniqueResults:(id)a0;
- (id)resultsNotPreviouslyReturned:(id)a0;
- (id)applyPriorityResultsOrder:(id)a0;
- (id)partitionCandidatesForRanking:(id)a0;
- (BOOL)resultIdentifierIsValidMessagesChatGuid:(id)a0;
- (BOOL)resultMatchesPrefix:(id)a0 inNameComponentsOfResult:(id)a1;

@end
