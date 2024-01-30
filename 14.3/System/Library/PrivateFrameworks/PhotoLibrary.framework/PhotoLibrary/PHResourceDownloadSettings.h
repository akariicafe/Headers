@interface PHResourceDownloadSettings : PHSettings

@property (nonatomic) BOOL simulateDownload;
@property (nonatomic) BOOL simulateDownloadFailure;

+ (id)sharedSettings;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
