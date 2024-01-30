@class NSArray, NSString;

@interface VNCreateFaceTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic) BOOL forceFaceprintCreation;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;

@end
