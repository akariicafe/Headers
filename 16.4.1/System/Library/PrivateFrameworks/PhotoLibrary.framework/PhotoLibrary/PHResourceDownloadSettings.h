@interface PHResourceDownloadSettings : PHSettings

@property (nonatomic) BOOL simulateDownload;
@property (nonatomic) BOOL simulateDownloadFailure;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (id)parentSettings;
- (void)setDefaultValues;

@end
