@class NSArray, NSString;

@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;

- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedAlignment:(id)a2 outputFacesThatNeedTorsoprints:(id)a3;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;

@end
