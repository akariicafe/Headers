@interface BKUIBundleSettings : NSObject

+ (id)objectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)synchronize;
+ (void)setDefaultSettingsValues;
+ (BOOL)isFpEnrollHapticFeedbackDisabled;
+ (BOOL)isUserStudy;
+ (void)setBool:(BOOL)a0 forUserDefaultsKey:(id)a1;
+ (void)setInteger:(long long)a0 forUserDefaultsKey:(id)a1;
+ (BOOL)boolForUserDefaultsKey:(id)a0;
+ (long long)integerForUserDefaultsKey:(id)a0;
+ (float)floatForUserDefaultsKey:(id)a0;

@end
