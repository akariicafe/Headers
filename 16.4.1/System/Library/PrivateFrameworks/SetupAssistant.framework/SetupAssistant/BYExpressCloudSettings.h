@interface BYExpressCloudSettings : NSObject

+ (void)fetchSettingsWithCompletion:(id /* block */)a0;
+ (id)createExpressSettingsWithQueue:(id)a0;
+ (int)_appearanceValue;
+ (id)_displayZoomOption;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (id)privacyBundleForIdentifier:(id)a0;
+ (void)updateSettings:(id)a0 withCompletion:(id /* block */)a1;

@end
