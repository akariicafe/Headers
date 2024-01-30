@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestToObservationClassMap;
}

- (void).cxx_destruct;
- (id)initWithSubrequestsAndUniqueObservationClasses:(id)a0;
- (id)initWithSubrequests:(id)a0 uniqueObservationClasses:(id)a1;
- (id)initWithOriginalRequests:(id)a0 requestToObservationClassMap:(id)a1;
- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;

@end
