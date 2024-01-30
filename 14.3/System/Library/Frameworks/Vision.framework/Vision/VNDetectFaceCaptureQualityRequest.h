@class NSArray, NSString;

@interface VNDetectFaceCaptureQualityRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)supportsPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedFaceQuality:(id)a2;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
