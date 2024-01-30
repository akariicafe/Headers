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
- (id)init;
- (void).cxx_destruct;
- (id)sortResults;
- (id)prepareResults:(id)a0;
- (id)addDiagnosticLog:(id /* block */)a0;
- (id)applyPriorityResultsOrder:(id)a0;
- (id)askDelegateToAdjustResults;
- (id)findUniqueResults:(id)a0;
- (id)initWithDelegate:(id)a0 fetchRequest:(id)a1;
- (id)resultsNotPreviouslyReturned:(id)a0;
- (id)suppressResultsWithAddresses:(id)a0;

@end
