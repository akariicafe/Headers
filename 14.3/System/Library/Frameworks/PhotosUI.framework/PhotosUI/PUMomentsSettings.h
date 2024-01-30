@interface PUMomentsSettings : PXSettings

+ (id)sharedInstance;
+ (void)_rebuildMoments;
+ (id)settingsControllerModule;

- (id)parentSettings;

@end
