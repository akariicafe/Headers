@class NSArray, NSString;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)supportsPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)hasCancellationHook;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)_applicableDetectorLoadedInSession:(id)a0 error:(id *)a1;
- (id)_detectorTypeForRequestRevision:(unsigned long long)a0 options:(id)a1 error:(id *)a2;
- (id)_applicableDetectorForRequestRevision:(unsigned long long)a0 applicableDetectorOptions:(id *)a1 loadedInSession:(id)a2 error:(id *)a3;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
