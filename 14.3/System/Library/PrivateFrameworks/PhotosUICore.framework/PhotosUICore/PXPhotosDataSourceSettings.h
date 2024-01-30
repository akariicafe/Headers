@interface PXPhotosDataSourceSettings : PXSettings

@property (nonatomic) BOOL slowBackgroundFetch;
@property (nonatomic) double delayChanges;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
