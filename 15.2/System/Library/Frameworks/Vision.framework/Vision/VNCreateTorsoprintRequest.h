@class NSArray, NSString;

@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting, VNDetectedObjectObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedPrivateRevisions;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)_processFaceBasedInputInContext:(id)a0 torsosThatNeedNoProcessing:(id)a1 torsosThatNeedTorsoprints:(id)a2 error:(id *)a3;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedAlignment:(id)a2 outputFacesThatNeedTorsoprints:(id)a3;
- (BOOL)_processHumanBodyBasedInputInContext:(id)a0 torsosThatNeedNoProcessing:(id)a1 torsosThatNeedTorsoprints:(id)a2 error:(id *)a3;
- (void)_determineHumanBodiesToProcessFrom:(id)a0 outputHumanBodiesThatNeedNoProcessing:(id)a1 tputHumanBodiesThatNeedTorsoprints:(id)a2;

@end
