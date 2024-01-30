@class NSNumber, NSArray, NSString;

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (nonatomic) BOOL refineMouthRegion;
@property (nonatomic) BOOL refineLeftEyeRegion;
@property (nonatomic) BOOL refineRightEyeRegion;
@property (nonatomic) BOOL performBlinkDetection;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property unsigned long long constellation;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;
+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;
+ (BOOL)revision:(unsigned long long)a0 supportsConstellation:(unsigned long long)a1;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedAlignment:(id)a2 outputFacesThatNeedLandmarks:(id)a3;

@end
