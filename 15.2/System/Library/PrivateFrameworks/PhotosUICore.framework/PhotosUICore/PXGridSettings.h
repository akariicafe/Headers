@interface PXGridSettings : PXSettings

@property (nonatomic) BOOL disableSelectionOverlayView;
@property (nonatomic) long long weightingScheme;
@property (nonatomic) BOOL enableAutomaticTransitionToSelectMode;
@property (nonatomic) BOOL simulateLongTitles;
@property (nonatomic) long long simulatedNumberOfLocations;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
