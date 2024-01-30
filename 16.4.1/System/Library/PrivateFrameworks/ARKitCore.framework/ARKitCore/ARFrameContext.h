@class ARWorldMap, NSString, NSArray, NSUUID, NSSet, ARLocationData, ARDeviceOrientationData, NSMutableArray, ARImageData;

@interface ARFrameContext : NSObject <ARDaemonSecureCoding, ARResultDataContext> {
    NSUUID *_identifier;
    NSMutableArray *_anchorsToAdd;
    NSMutableArray *_anchorsToRemove;
    NSMutableArray *_anchorsToStopTracking;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *anchorsToAdd;
@property (readonly, copy, nonatomic) NSArray *anchorsToRemove;
@property (readonly, copy, nonatomic) NSArray *anchorsToStopTracking;
@property (copy, nonatomic) NSSet *collaborationData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } sessionTransform;
@property (readonly, nonatomic) BOOL sessionTransformUpdated;
@property (readonly, nonatomic) BOOL sessionTransformReset;
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraHeading;
@property (readonly, nonatomic) BOOL sessionTransformShouldResumeCameraPosition;
@property (nonatomic) BOOL didRelocalize;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } relocalizationDeltaTransform;
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
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)stopTrackingAnchors:(id)a0;
- (void)resetSessionTransform;
- (void)addAnchor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)removeAnchor:(id)a0;
- (void)clearAddedAnchors;
- (void).cxx_destruct;
- (id)resultDataOfClass:(Class)a0;
- (void)resumeSessionCameraPosition;
- (void)resumeSessionCameraPositionAndHeading;
- (void)setAnchorsToAdd:(id)a0;
- (void)setAnchorsToRemove:(id)a0;
- (void)setAnchorsToStopTracking:(id)a0;
- (void)setSessionTransformReset:(BOOL)a0;
- (void)setSessionTransformUpdated:(BOOL)a0;

@end
