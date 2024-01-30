@class AREnvironmentProbeUpdate, NSUUID, NSMutableDictionary, ARImageData, ARCubemapGenerator, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface AREnvironmentProbeManager : NSObject {
    double _minimumProbeUpdateInterval;
    double _lastProbeUpdateTime;
    NSMutableArray *_initialProbeIdentifiers;
    NSMutableArray *_anchorsToRemove;
    NSMutableDictionary *_probesByIdentifier;
    NSMutableDictionary *_probeIdentifiersByPlaneIdentifier;
    NSMutableArray *_requestedProbeIdentifiers;
    NSMutableArray *_updatedProbeIdentifiers;
    NSMutableArray *_directTexturingIdentifiers;
    NSUUID *_universeProbeIdentifier;
    NSObject<OS_dispatch_semaphore> *_textureDataSemaphore;
    NSMutableArray *_probeUpdateQueue;
    AREnvironmentProbeUpdate *_currentProbeUpdate;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    ARImageData *_lastImageData;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastCameraTransform;
    struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane *__begin_; struct ARTexturedPlane *__end_; struct __compressed_pair<ARTexturedPlane *, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane *__value_; } __end_cap_; } _lastPlanes;
    ARCubemapGenerator *_cubemapGenerator;
    BOOL _isReady;
}

@property (readonly, nonatomic) long long mode;

- (id)initWithMode:(long long)a0;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)_fullDescription;
- (id).cxx_construct;
- (id)updateProbesForTimestamp:(double)a0 planes:(struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane *x0; struct ARTexturedPlane *x1; struct __compressed_pair<ARTexturedPlane *, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane *x0; } x2; })a1 imageData:(id)a2 pose:(id)a3 enableDirectTexturingForProbesWithIdentifier:(id)a4;
- (BOOL)_textureDataIsBusy;
- (void)insertIntoQueue:(id)a0;
- (void)requestTextureForProbe:(id)a0;
- (BOOL)addProbeWithAnchor:(id)a0 timestamp:(double)a1 textureImmediately:(BOOL)a2;
- (void)updateProbesFromExistingAnchors:(id)a0;

@end
