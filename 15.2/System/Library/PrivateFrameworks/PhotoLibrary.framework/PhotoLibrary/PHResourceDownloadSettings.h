@interface PHResourceDownloadSettings : PHSettings

@property (nonatomic) BOOL simulateDownload;
@property (nonatomic) BOOL simulateDownloadFailure;

+ (id)sharedSettings;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
