@class NSArray;

@interface VNGroupImagesByTimeAndContentRequest : VNRequest

@property (copy, nonatomic) NSArray *inputImageprints;
@property (nonatomic) float clusteringDistanceThreshold;

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (void)recordDefaultOptionsInDictionary:(id)a0;
+ (BOOL)setsTimeRangeOnResults;

- (void).cxx_destruct;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id /* block */)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)initWithImageprintObservations:(id)a0 clusteringDistanceThreshold:(float)a1;
- (id)initWithImageprintObservations:(id)a0 clusteringDistanceThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (BOOL)allowsCachingOfResults;
- (BOOL)internalPerformInContext:(id)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
