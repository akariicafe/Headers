@class NSArray, AREnvironmentProbeManager, NSString;

@interface AREnvironmentProbeUpdate : NSObject <ARResultData>

@property (weak, nonatomic) AREnvironmentProbeManager *manager;
@property (retain, nonatomic) NSArray *addedProbeAnchors;
@property (retain, nonatomic) NSArray *updatedProbeAnchors;
@property (retain, nonatomic) NSArray *removedProbeAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;

@end
