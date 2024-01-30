@class NSArray, NSString;

@interface VNClassifyImageAestheticsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly) NSArray *supportedImageSizeSet;
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
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)_detectorLoadedInSession:(id)a0 forRevision:(unsigned long long)a1 getAppliedDetectorOptions:(id *)a2 error:(id *)a3;
- (id)_smartCamCombinedModelImageAestheticsClassificationsForRevision:(unsigned long long)a0 performedInContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
