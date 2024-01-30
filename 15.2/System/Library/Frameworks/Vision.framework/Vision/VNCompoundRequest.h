@class NSArray, NSNumber;

@interface VNCompoundRequest : VNRequest {
    NSNumber *_cachedDependencyProcessingOrdinality;
}

@property (readonly, copy, nonatomic) NSArray *originalRequests;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;

+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)a0;

- (id)sequencedRequestPreviousObservationsKey;
- (long long)dependencyProcessingOrdinality;
- (BOOL)usesCPUOnly;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (id /* block */)resultsSortingComparator;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)initWithOriginalRequests:(id)a0;
- (BOOL)allowsCachingOfResults;
- (id)compoundResults;
- (void)recordWarningsInOriginalRequests;

@end
