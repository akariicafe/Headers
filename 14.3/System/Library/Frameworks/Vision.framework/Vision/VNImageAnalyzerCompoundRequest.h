@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}

+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (Class)configurationClass;
+ (void)_addCompoundRequestsToArray:(id)a0 forModel:(unsigned long long)a1 withGroupingConfigurations:(id)a2;

- (void).cxx_destruct;
- (id)initWithDetectorType:(id)a0 groupingConfiguration:(id)a1;
- (id)_configuredDetectorForRequestRevision:(unsigned long long)a0 session:(id)a1 appliedConfigurationOptions:(id *)a2 error:(id *)a3;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id /* block */)resultsSortingComparator;
- (BOOL)allowsCachingOfResults;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
