@class NSArray, VNClassificationCustomHierarchy, NSString;

@interface VNClassifyImageRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)knownClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)setRevision:(unsigned long long)a0;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id /* block */)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (void)_setCustomHierarchy:(id)a0;
- (BOOL)defineCustomHierarchy:(id)a0 error:(id *)a1;
- (id)defineCustomHierarchyWithRelationships:(id)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
