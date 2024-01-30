@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)copySettingsToSharedContainer;
+ (void)moveUserDefaultToSharedContainer:(id)a0;
+ (void)registerDefaults;

@end
