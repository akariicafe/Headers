@interface SBHCenterZoomSettings : SBHIconZoomSettings

@property (nonatomic) BOOL preferCenterOfIconGrid;
@property (nonatomic) double centerRowCoordinate;
@property (nonatomic) long long distanceEffect;
@property (nonatomic) double firstHopIncrement;
@property (nonatomic) double hopIncrementAcceleration;
@property (nonatomic) double dockMass;
@property (nonatomic) BOOL zoomViewBelowIcons;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
