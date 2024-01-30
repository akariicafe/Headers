@class NSMutableDictionary, NSMutableSet, NSLock, NSMutableArray;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {
    NSLock *_requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}

- (void)cancelAllRequests;
- (id)init;
- (void).cxx_destruct;
- (BOOL)performDependentRequests:(id)a0 inContext:(id)a1 onBehalfOfRequest:(id)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)_performOrderedRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)performRequests:(id)a0 inContext:(id)a1 onBehalfOfRequest:(id)a2 error:(id *)a3;
- (BOOL)performRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)previousSequencedObservationsForRequest:(id)a0;
- (void)releaseTracker:(id)a0;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (id)dependencyAnalyzedRequestsForRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
- (id)orderedRequestsForRequests:(id)a0;
- (void)recordSequencedObservationsForRequest:(id)a0;
- (BOOL)_validateAndPrepareRequests:(id)a0 error:(id *)a1;

@end
