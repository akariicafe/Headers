@interface PHImageManagerSettings : PHSettings

@property (nonatomic) BOOL allowImageRequests;
@property (nonatomic) BOOL allowCaching;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (id)parentSettings;
- (void)setDefaultValues;

@end
