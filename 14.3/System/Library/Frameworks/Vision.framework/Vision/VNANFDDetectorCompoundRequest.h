@interface VNANFDDetectorCompoundRequest : VNCompoundRequest

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (Class)configurationClass;
+ (long long)compoundRequestRevisionForRequest:(id)a0;

- (id)initWithDetectorType:(id)a0 configuration:(id)a1;
- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;

@end
