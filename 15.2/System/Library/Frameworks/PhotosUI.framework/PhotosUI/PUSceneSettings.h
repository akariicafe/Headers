@interface PUSceneSettings : PXSettings

@property (nonatomic) BOOL showConfidenceOverlay;
@property (nonatomic) unsigned long long inspectorSortOrder;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
