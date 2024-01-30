@interface SiriUIUtilities : NSObject

+ (id)defaultBrowserBundleIdentifier;
+ (BOOL)string:(id)a0 isSameAsUserUtterance:(id)a1;
+ (BOOL)shouldShowHeaderForDirectActionEvent:(long long)a0;
+ (id)deviceSpecificKeyForDefaultKey:(id)a0;
+ (id)_normalizeTextString:(id)a0;
+ (id)descriptionForAceView:(id)a0;
+ (id)descriptionForDialog:(id)a0;
+ (id)descriptionForSayIt:(id)a0;
+ (BOOL)string:(id)a0 equalToString:(id)a1;
+ (id)stringForDeviceType;
+ (id)stringForSiriUIBackgroundBlurReason:(long long)a0;

@end
