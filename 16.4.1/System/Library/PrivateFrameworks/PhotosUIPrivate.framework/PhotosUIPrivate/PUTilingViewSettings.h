@interface PUTilingViewSettings : PXSettings

@property (nonatomic) double animationDragCoefficient;
@property (nonatomic) BOOL useSpringAnimations;
@property (nonatomic) BOOL useSystemSpringAnimations;
@property (nonatomic) double springAnimationDuration;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) BOOL useOvershootingSpringAnimations;
@property (nonatomic) double transitionDuration;
@property (nonatomic) long long transitionProgressBehavior;
@property (nonatomic) double interactiveTransitionBackgroundDimming;
@property (nonatomic) double transitionChromeDelay;
@property (nonatomic) BOOL allowPaging;
@property (nonatomic) BOOL allowPreheating;
@property (nonatomic) BOOL allowTileReuse;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL carryOverVelocities;
@property (nonatomic) BOOL tintTiles;
@property (nonatomic) BOOL showVisibleRects;
@property (nonatomic) BOOL rotateDisappearingTiles;
@property (nonatomic) BOOL showSnapshottableTiles;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
