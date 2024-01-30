@class _UITabBarSettings;

@interface _UIBarSettings : PTSettings

@property (nonatomic) long long backgroundMode;
@property (nonatomic) BOOL retainShadow;
@property (nonatomic) BOOL colorByBarType;
@property (retain, nonatomic) _UITabBarSettings *tabBarSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
