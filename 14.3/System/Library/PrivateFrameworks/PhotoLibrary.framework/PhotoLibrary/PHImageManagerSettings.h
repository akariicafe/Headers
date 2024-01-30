@interface PHImageManagerSettings : PHSettings

@property (nonatomic) BOOL allowImageRequests;
@property (nonatomic) BOOL allowCaching;

+ (id)sharedSettings;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
