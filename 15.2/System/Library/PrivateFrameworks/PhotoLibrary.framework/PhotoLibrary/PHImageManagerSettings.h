@interface PHImageManagerSettings : PHSettings

@property (nonatomic) BOOL allowImageRequests;
@property (nonatomic) BOOL allowCaching;

+ (id)sharedSettings;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
