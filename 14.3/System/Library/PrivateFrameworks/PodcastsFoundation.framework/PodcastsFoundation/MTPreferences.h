@interface MTPreferences : NSObject

+ (id)_defaultSettings;
+ (id)sharedUserDefaults;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (void)registerDefaults;
+ (void)moveUserDefaultToSharedContainer:(id)a0;
+ (BOOL)copySettingsToSharedContainer;

@end
