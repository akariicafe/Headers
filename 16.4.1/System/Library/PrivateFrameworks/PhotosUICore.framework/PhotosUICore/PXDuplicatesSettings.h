@interface PXDuplicatesSettings : PXSettings

@property (nonatomic) BOOL showDuplicateGroupsWithASingleAsset;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
