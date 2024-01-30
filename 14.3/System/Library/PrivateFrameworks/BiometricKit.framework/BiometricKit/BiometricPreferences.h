@interface BiometricPreferences : NSObject

+ (id)stateDictionary;
+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1 defaultValue:(id)a2;
+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1;
+ (void)setPreferenceValue:(id)a0 forKey:(id)a1;
+ (BOOL)isPreferenceKeySet:(id)a0;

@end
