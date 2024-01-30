@class NSArray, NSMutableArray, NSMapTable;

@interface VNRequestForensics : NSObject {
    NSArray *_originalRequests;
    NSArray *_orderedRequests;
    NSMutableArray *_implicitRequests;
    NSMutableArray *_performedRequests;
    NSMutableArray *_cachedRequestResults;
    NSMutableArray *_checkedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_locatedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_ledger;
    NSMapTable *_requestToHumanReadableLabelMap;
}

@property (copy, nonatomic) NSArray *orderedRequests;
@property (readonly, copy, nonatomic) NSArray *originalRequests;
@property (readonly, copy, nonatomic) NSArray *performedRequests;

- (id)description;
- (void).cxx_destruct;
- (id)keyUsedToCacheResultsOfRequest:(id)a0;
- (id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)a0;
- (id)_humanReadableLabelForRequest:(id)a0;
- (void)cachedObservationsWithKey:(id)a0 wereCheckedOnBehalfOfRequest:(id)a1;
- (void)cachedObservationsWithKey:(id)a0 wereLocatedOnBehalfOfRequest:(id)a1;
- (id)initWithOriginalRequests:(id)a0;
- (void)performedRequest:(id)a0 withError:(id)a1;
- (void)performingOrderedDependentRequests:(id)a0 onBehalfOfRequest:(id)a1;
- (void)performingRequest:(id)a0;
- (void)request:(id)a0 cachedResultsWithObservationsCacheKey:(id)a1;
- (id)requestThatProvidedObservationsForRequest:(id)a0;
- (id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)a0;
- (id)requestsThatLookedUpCachedResultsKey:(id)a0;
- (BOOL)resultsObtainedFromObservationsCacheForRequest:(id)a0;

@end
