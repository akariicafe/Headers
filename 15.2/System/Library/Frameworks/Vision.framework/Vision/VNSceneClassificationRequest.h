@class NSArray, NSString, VNClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (class, readonly, nonatomic) NSArray *knownSceneClassifications;

@property (readonly, retain, nonatomic) VNSceneObservation *sceneObservation;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (readonly, copy) NSArray *results;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)_knownVNImageAnalyzerMultiDetectorSceneLabelsForRevision:(unsigned long long)a0 requestBackingStore:(unsigned long long)a1 error:(id *)a2;
+ (id)_imageAnalyzerMultiDetectorLoadedInSession:(id)a0 forRevision:(unsigned long long)a1 processingDevice:(id)a2 requestBackingStore:(unsigned long long)a3 appliedDetectorOptions:(id *)a4 error:(id *)a5;
+ (id)knownSceneClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedIdentifiersAndReturnError:(id *)a0;
- (void)applyConfigurationOfRequest:(id)a0;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (void)setSceneObservation:(id)a0;
- (id)initWithSceneObservation:(id)a0;
- (id)initWithSceneObservation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_errorForUnimplementedSelector:(SEL)a0 forRevision:(unsigned long long)a1;
- (void)_setCustomHierarchy:(id)a0;
- (BOOL)defineCustomHierarchy:(id)a0 error:(id *)a1;
- (id)defineCustomHierarchyWithRelationships:(id)a0 error:(id *)a1;

@end
