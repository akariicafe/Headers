@interface SiriUIUtilities : NSObject

+ (id)defaultBrowserBundleIdentifier;
+ (id)stringForSiriUIBackgroundBlurReason:(long long)a0;
+ (id)stringForDeviceType;
+ (id)_normalizeTextString:(id)a0;
+ (id)deviceSpecificKeyForDefaultKey:(id)a0;
+ (BOOL)string:(id)a0 isSameAsUserUtterance:(id)a1;
+ (id)substringRangesContainingEmojiInString:(id)a0;
+ (BOOL)shouldShowHeaderForDirectActionEvent:(long long)a0;

@end
