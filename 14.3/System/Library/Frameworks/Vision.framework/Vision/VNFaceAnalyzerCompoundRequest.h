@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (Class)configurationClass;

- (id)initWithDetectorType:(id)a0 configuration:(id)a1;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputfacesThatNeedAttributes:(id)a2 isFaceprintRequest:(BOOL)a3 isAttributeRequest:(BOOL)a4;
- (unsigned long long)detectionLevel;
- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (long long)dependencyProcessingOrdinality;

@end
