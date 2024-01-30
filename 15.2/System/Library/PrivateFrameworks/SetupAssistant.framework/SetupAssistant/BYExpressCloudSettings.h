@interface BYExpressCloudSettings : NSObject

+ (void)updateSettings:(id)a0 withCompletion:(id /* block */)a1;
+ (id)createExpressSettingsWithQueue:(id)a0;
+ (int)_appearanceValue;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (id)_displayZoomOption;
+ (void)fetchSettingsWithCompletion:(id /* block */)a0;
+ (id)privacyBundleForIdentifier:(id)a0;

@end
