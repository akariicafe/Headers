@class CNHandleStringClassifier, CNAutocompleteFetchRequest, NSMutableOrderedSet;
@protocol CNPromise, CNAutocompleteFetchDelegate, CNFuture;

@interface CNAutocompleteQueryResponsePreparer : NSObject {
    NSMutableOrderedSet *_previouslyReturnedResults;
    CNHandleStringClassifier *_handleStringClassifier;
}

@property (readonly, weak, nonatomic) id<CNAutocompleteFetchDelegate> delegate;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest;
@property (retain, nonatomic) id<CNFuture> priorityResultsFuture;
@property (retain, nonatomic) id<CNPromise> matchingPriorityResultsPromise;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sortResults;
- (id)initWithDelegate:(id)a0 fetchRequest:(id)a1;
- (id)addDiagnosticLog:(id /* block */)a0;
- (id)askDelegateToAdjustResults;
- (id)suppressResultsWithAddresses:(id)a0;
- (id)prepareResults:(id)a0;
- (id)findUniqueResults:(id)a0;
- (id)resultsNotPreviouslyReturned:(id)a0;
- (id)applyPriorityResultsOrder:(id)a0;

@end
