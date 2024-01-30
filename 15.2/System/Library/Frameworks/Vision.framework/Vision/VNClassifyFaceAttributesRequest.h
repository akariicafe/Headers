@class NSArray, NSString;

@interface VNClassifyFaceAttributesRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedPrivateRevisions;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (long long)dependencyProcessingOrdinality;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;

@end
