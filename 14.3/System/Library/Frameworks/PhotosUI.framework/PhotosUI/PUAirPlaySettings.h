@interface PUAirPlaySettings : PXSettings

@property (nonatomic) BOOL ignoreMirroredScreens;
@property (nonatomic) BOOL ignoreScreenRecordingScreens;
@property (nonatomic) BOOL compensateForOverscan;
@property (nonatomic) unsigned long long placeholderForSecondScreen;
@property (nonatomic) unsigned long long placeholderForMirroredScreen;
@property (nonatomic) double minimumZoomForScrollPadding;
@property (nonatomic) double maximumZoomForScrollPadding;
@property (nonatomic) BOOL switchToMediaPresentationMode;
@property (nonatomic) double simulatedScreenContentWidth;
@property (nonatomic) double simulatedScreenContentHeight;
@property (nonatomic) long long routeAvailabilityOverride;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (id)debugDescription;

@end
