@class PHResourceDownloadSettings, PHImageManagerSettings;

@interface PHRootSettings : PHSettings

@property (readonly, nonatomic) PHImageManagerSettings *imageManagerSettings;
@property (readonly, nonatomic) PHResourceDownloadSettings *resourceDownloadSettings;

+ (id)settingsControllerModule;
+ (id)sharedSettings;
+ (void)_rebuildMoments;

- (id)parentSettings;
- (void).cxx_destruct;

@end
