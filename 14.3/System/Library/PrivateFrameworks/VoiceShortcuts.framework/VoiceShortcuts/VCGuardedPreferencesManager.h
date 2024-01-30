@interface VCGuardedPreferencesManager : NSObject

+ (BOOL)setInteger:(long long)a0 forKey:(id)a1 inDomain:(id)a2 withAccessSpecifier:(id)a3 error:(id *)a4;
+ (id)keyWithPreferenceKey:(id)a0 bundleId:(id)a1;

@end
