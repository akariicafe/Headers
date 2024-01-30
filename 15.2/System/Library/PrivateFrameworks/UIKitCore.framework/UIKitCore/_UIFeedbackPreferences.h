@class NSDictionary, NSUserDefaults, NSMutableDictionary;

@interface _UIFeedbackPreferences : NSObject {
    NSMutableDictionary *_enabledFeedbackTypes;
}

@property (readonly, nonatomic) NSDictionary *defaultFeedbackTypes;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)sharedPreferences;

- (void)_updateEnabledFeedbackTypes:(unsigned long long *)a0 forKey:(id)a1 type:(unsigned long long)a2;
- (id)_defaultKeyForCategoryKey:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)a0;
- (void)_invalidate;
- (id)_categoryForNullableCategory:(id)a0;
- (void)_startObservingDefaults;
- (void)_setEnabledFeedbackTypes:(unsigned long long)a0 forCategory:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_categoryKeyForCategory:(id)a0 type:(unsigned long long)a1;
- (void)_setEnabledFeedbackTypes:(unsigned long long)a0 forCategory:(id)a1 postNotification:(BOOL)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)a0;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)a0;
- (void)_accessibilityForceTouchChanged:(id)a0;

@end
