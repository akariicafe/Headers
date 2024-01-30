@class ARWorldMap, ARLocationData, NSString, NSMutableSet, NSMutableArray, ARDeviceOrientationData, ARImageData;

@interface ARFrameContext : NSObject <ARDaemonSecureCoding, ARResultDataContext> {
    NSMutableArray *_anchorsToAdd;
    NSMutableArray *_anchorsToRemove;
    NSMutableArray *_anchorsToStopTracking;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL didRelocalize;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } relocalizationDeltaTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } sessionTransform;
@property (readonly, nonatomic) BOOL sessionTransformUpdated;
@property (readonly, nonatomic) BOOL sessionTransformReset;
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraHeading;
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraPosition;
@property (retain, nonatomic) NSMutableSet *collaborationData;
@property (retain, nonatomic) ARImageData *imageData;
@property (retain, nonatomic) ARDeviceOrientationData *orientationData;
@property (retain, nonatomic) ARLocationData *locationData;
@property (nonatomic) long long worldAlignment;
@property (retain, nonatomic) ARWorldMap *worldMap;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultDataOfClass:(Class)a0;
- (long long)cameraPosition;
- (id)anchorsToAdd;
- (void)encodeWithCoder:(id)a0;
- (void)resumeSessionCameraPositionAndHeading;
- (void)stopTrackingAnchors:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)resumeSessionCameraPosition;
- (void)clearAddedAnchors;
- (id)anchorsToStopTracking;
- (void)addAnchor:(id)a0;
- (void)removeAnchor:(id)a0;
- (void)resetSessionTransform;
- (id)anchorsToRemove;

@end
