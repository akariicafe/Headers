@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestToObservationClassMap;
}

- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithOriginalRequests:(id)a0 requestToObservationClassMap:(id)a1;
- (id)initWithSubrequests:(id)a0 uniqueObservationClasses:(id)a1;

@end
