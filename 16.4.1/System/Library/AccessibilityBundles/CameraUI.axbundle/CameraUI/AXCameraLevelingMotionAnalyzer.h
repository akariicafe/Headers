@class CMDeviceMotion;

@interface AXCameraLevelingMotionAnalyzer : NSObject

@property (retain, nonatomic) CMDeviceMotion *_lastDeviceMotion;
@property (nonatomic) BOOL _cameraStableForLeveling;
@property (nonatomic) double _lastUnstableMotionTimestamp;

+ (long long)_deviceOrientationForRotation:(double)a0 shift:(double)a1;
+ (long long)_levelZoneForDeviceMotion:(id)a0 previousZone:(long long)a1;
+ (double)_offsetFromLevelForOrientation:(long long)a0 rotation:(double)a1 shift:(double)a2;

- (void).cxx_destruct;
- (void)reset;
- (void)_updateCameraStableForMotion:(id)a0 previousMotion:(id)a1;
- (long long)updateWithDeviceMotion:(id)a0 previousZone:(long long)a1;

@end
