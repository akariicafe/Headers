@interface PXFooterSettings : PXSettings

@property (nonatomic) BOOL shouldAlternateTitleWithGridCycle;
@property (nonatomic) long long alternateTitleGridCycleCount;
@property (nonatomic) double alternateTitleGridCycleDelay;
@property (nonatomic) double alternateTitleCyclingInterval;
@property (nonatomic) double animationDelay;
@property (nonatomic) float minimumDisplayedProgress;
@property (nonatomic) BOOL simulateCPLDisabled;
@property (nonatomic) BOOL simulateImportantInformation;
@property (nonatomic) BOOL simulateAnimatedIconMode;
@property (nonatomic) long long simulatedAnimatedIconMode;
@property (nonatomic) BOOL showFilterView;

+ (id)sharedInstance;
+ (void)resetLastShownInfo;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
