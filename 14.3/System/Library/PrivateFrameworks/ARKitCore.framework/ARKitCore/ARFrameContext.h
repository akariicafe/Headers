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

- (long long)cameraPosition;
- (id)init;
- (void).cxx_destruct;
- (void)addAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeAnchor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)resultDataOfClass:(Class)a0;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (void)resetSessionTransform;
- (void)resumeSessionCameraPosition;
- (void)resumeSessionCameraPositionAndHeading;
- (id)anchorsToStopTracking;
- (void)clearAddedAnchors;
- (void)stopTrackingAnchors:(id)a0;

@end
