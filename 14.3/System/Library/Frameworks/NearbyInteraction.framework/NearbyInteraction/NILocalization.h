@interface NILocalization : NSObject

+ (id)fallbackBundle;
+ (id)_niLocalizedStringFromFrameworkBundleWithKey:(id)a0;
+ (id)localizedBundle;
+ (id)_niFrameworkBundle;
+ (id)fallbackBundleWithBundle:(id)a0;
+ (id)localizedBundleWithBundle:(id)a0;
+ (id)_niLocalizedStringFromBundle:(id)a0 withKey:(id)a1;

@end
