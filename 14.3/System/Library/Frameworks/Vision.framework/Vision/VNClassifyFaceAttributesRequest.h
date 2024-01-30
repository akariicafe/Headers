@class NSArray, NSString;

@interface VNClassifyFaceAttributesRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;

@end
