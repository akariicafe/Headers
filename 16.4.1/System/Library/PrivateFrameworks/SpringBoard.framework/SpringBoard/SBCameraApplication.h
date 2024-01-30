@interface SBCameraApplication : SBApplication

@property (nonatomic) BOOL hasPreHeatInFlight;

- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (void)_cancelPreheatForUserLaunchIfNecessary;

@end
