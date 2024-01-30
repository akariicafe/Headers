@interface PXRelatedSettings : PXSettings

@property (nonatomic) long long implementation;
@property (nonatomic) long long limit;
@property (nonatomic) long long preferredInitialNumberOfEntriesDisplayed;
@property (nonatomic) BOOL enableDiversity;
@property (nonatomic) BOOL passKeyAsset;
@property (nonatomic) BOOL simulateSlowFetches;
@property (nonatomic) double polaroidFadeDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
