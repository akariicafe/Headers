@class NSArray, NSString;

@interface VNCreateFaceRegionMapRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedProcessing:(id)a2 outputFacesThatNeed2DLandmarks:(id)a3;

@end
