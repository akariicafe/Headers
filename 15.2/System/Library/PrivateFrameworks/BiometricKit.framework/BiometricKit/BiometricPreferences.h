@interface BiometricPreferences : NSObject

+ (void)setPreferenceValue:(id)a0 forKey:(id)a1;
+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1;
+ (id)preferenceValueOfClass:(Class)a0 forKey:(id)a1 defaultValue:(id)a2;
+ (id)stateDictionary;
+ (BOOL)isPreferenceKeySet:(id)a0;

@end
