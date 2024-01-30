@interface NSPersonNameComponentsFormatterPreferences : NSObject

+ (void)setShortNameFormat:(long long)a0;
+ (void)setDefaultDisplayNameOrder:(long long)a0;
+ (void)setShortNameIsEnabled:(BOOL)a0;
+ (void)setPreferNicknamesDefault:(BOOL)a0;
+ (void)_postPreferencesChangedNotification;
+ (void)_syncronizeGizmoDefaultWithKey:(id)a0 value:(long long)a1;
+ (void)_setPreference:(id)a0 toValue:(long long)a1 usingExistingGetter:(SEL)a2;
+ (id)mappedPreferencesForPreferences:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
+ (id)infoClassFromPreferencesSource:(unsigned long long)a0;

@end
