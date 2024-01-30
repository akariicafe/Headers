@interface PXVideoPlaybackSettings : PXSettings

@property (nonatomic) BOOL isDownloadingVideoSegmentsEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
