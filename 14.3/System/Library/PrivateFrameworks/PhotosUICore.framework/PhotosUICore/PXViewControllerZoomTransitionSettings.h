@interface PXViewControllerZoomTransitionSettings : PXSettings

@property (nonatomic) long long animationType;
@property (nonatomic) long long crossfadeType;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double titleCrossfadeAmount;
@property (nonatomic) BOOL showRectsOfInterest;
@property (nonatomic) BOOL animateViewControllersViews;
@property (nonatomic) BOOL animateEndPointsContents;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
