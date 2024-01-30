@interface SBCornerFingerPanGestureSettings : PTSettings

@property (nonatomic) unsigned long long tuning;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double *)angleDegreesAscendingLUT:(BOOL)a0;
- (double *)distanceMillimetersValues:(BOOL)a0;
- (double)maximumActiveDistance:(BOOL)a0;
- (unsigned long long)vectorCount:(BOOL)a0;

@end
