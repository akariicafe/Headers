@class NSArray, NSString, VNClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (class, readonly, nonatomic) NSArray *knownSceneClassifications;

@property (readonly, retain, nonatomic) VNSceneObservation *sceneObservation;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;
+ (Class)configurationClass;
+ (id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)a0 requestBackingStore:(unsigned long long)a1 error:(id *)a2;
+ (id)_imageAnalyzerMultiDetectorLoadedInSession:(id)a0 forRevision:(unsigned long long)a1 detectionLevel:(unsigned long long)a2 processingDevice:(id)a3 requestBackingStore:(unsigned long long)a4 appliedDetectorOptions:(id *)a5 error:(id *)a6;
+ (id)_sceneClassifierLoadedInSession:(id)a0 forRevision:(unsigned long long)a1 requestBackingStore:(unsigned long long)a2 appliedDetectorOptions:(id *)a3 error:(id *)a4;
+ (id)_knownVNImageAnalyzerMultiDetectorSceneClassificationObservationsForRevision:(unsigned long long)a0 requestBackingStore:(unsigned long long)a1 error:(id *)a2;
+ (id)knownSceneClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)setRevision:(unsigned long long)a0;
- (id /* block */)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (void)setSceneObservation:(id)a0;
- (id)initWithSceneObservation:(id)a0;
- (id)initWithSceneObservation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_errorForUnimplementedSelector:(SEL)a0 forRevision:(unsigned long long)a1;
- (void)_setCustomHierarchy:(id)a0;
- (BOOL)defineCustomHierarchy:(id)a0 error:(id *)a1;
- (id)defineCustomHierarchyWithRelationships:(id)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
