@class NSMapTable;

@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestsClassMapping;
}

- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithSubrequests:(id)a0;
- (id)originalRequestsOfClass:(Class)a0;

@end
