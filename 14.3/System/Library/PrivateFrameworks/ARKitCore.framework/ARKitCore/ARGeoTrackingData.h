@class ARLocationData, NSString;

@interface ARGeoTrackingData : NSObject <ARResultData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ARLocationData *enuOrigin;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } vioFromENU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)initWithENUOrigin:(id)a0 vioFromENU:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
