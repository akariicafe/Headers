@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}

+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)initWithDetectorType:(id)a0 groupingConfiguration:(id)a1;

@end
