@class SBFFluidBehaviorSettings;

@interface SBReachabilitySettings : PTSettings

@property (nonatomic) BOOL allowOnAllDevices;
@property (nonatomic) double reachabilityDefaultKeepAlive;
@property (nonatomic) double reachabilityInteractiveKeepAlive;
@property (nonatomic) double yOffsetFactor;
@property (nonatomic) double homeGestureSwipeDownHysteresis;
@property (nonatomic) double homeGestureSwipeDownHeight;
@property (nonatomic) double systemWideSwipeDownHeight;
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)yOffset;
- (void).cxx_destruct;

@end
