@interface PXVideoPlaybackSettings : PXSettings

@property (nonatomic) BOOL isDownloadingVideoSegmentsEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
