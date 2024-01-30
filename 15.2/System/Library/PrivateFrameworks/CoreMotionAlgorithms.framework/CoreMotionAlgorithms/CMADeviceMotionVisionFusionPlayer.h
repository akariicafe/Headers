@interface CMADeviceMotionVisionFusionPlayer : NSObject {
    struct unique_ptr<CMVLFDeviceMotionFuser, std::default_delete<CMVLFDeviceMotionFuser>> { struct __compressed_pair<CMVLFDeviceMotionFuser *, std::default_delete<CMVLFDeviceMotionFuser>> { struct CMVLFDeviceMotionFuser *__value_; } __ptr_; } fVLFDeviceMotionFuser;
    float fMagneticDeclination;
    double fMagneticDeclinationTimestamp;
}

@property (nonatomic, getter=isPlayerActive) BOOL playerActive;
@property (nonatomic, getter=isARSessionActive) BOOL arSessionActive;
@property (nonatomic, getter=isFusionEnabled) BOOL fusionEnabled;

- (void)updateLocation:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id).cxx_construct;
- (void)stop;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)setEnableFusion:(BOOL)a0;
- (id)getFusedDeviceMotionFrom:(id)a0 andAttitudeReferenceFrame:(unsigned long long)a1;
- (void)updateVLLocalizationResult:(id)a0;
- (id)getFusedDeviceMotionFrom:(id)a0;
- (float)magneticDeclination;

@end
