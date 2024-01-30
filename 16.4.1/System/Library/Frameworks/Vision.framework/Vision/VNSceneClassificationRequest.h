@class NSArray, VNClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequest : VNImageBasedRequest

@property (class, readonly, nonatomic) NSArray *knownSceneClassifications;

@property (readonly, retain, nonatomic) VNSceneObservation *sceneObservation;
@property (nonatomic) unsigned long long maximumLeafObservations;
@property (nonatomic) unsigned long long maximumHierarchicalObservations;
@property (readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)supportedPrivateRevisions;
+ (id)knownSceneClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (long long)dependencyProcessingOrdinality;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (void)_setCustomHierarchy:(id)a0;
- (BOOL)defineCustomHierarchy:(id)a0 error:(id *)a1;
- (id)defineCustomHierarchyWithRelationships:(id)a0 error:(id *)a1;
- (id)initWithSceneObservation:(id)a0;
- (id)initWithSceneObservation:(id)a0 completionHandler:(id /* block */)a1;
- (void)setSceneObservation:(id)a0;
- (id)supportedIdentifiersAndReturnError:(id *)a0;

@end
