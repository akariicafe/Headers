@class NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}

- (void)cancelAllRequests;
- (BOOL)_performRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)performDependentRequests:(id)a0 onBehalfOfRequest:(id)a1 inContext:(id)a2 error:(id *)a3;
- (void)recordSequencedObservationsForRequest:(id)a0;
- (id)orderedRequestsForRequests:(id)a0;
- (id)dependencyAnalyzedRequestsForRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)releaseTracker:(id)a0;
- (id)init;
- (BOOL)_validateAndPrepareRequests:(id)a0 error:(id *)a1;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (BOOL)performRequests:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)previousSequencedObservationsForRequest:(id)a0;
- (BOOL)_performOrderedRequests:(id)a0 inContext:(id)a1 error:(id *)a2;

@end
