@interface AMSStorage : NSObject

+ (BOOL)_boolFromCFPreferencesForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(id)a2;
+ (id)_valueFromCFPreferencesForKey:(id)a0 domain:(struct __CFString { } *)a1;
+ (id)_valueForKey:(id)a0;
+ (long long)_integerFromDatabaseForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2 error:(id *)a3;
+ (id)sharedStoreReviewMetricsForProcess:(id)a0;
+ (void)setBagURLCookies:(id)a0;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_migrateBoolToDatabase:(BOOL)a0 forKey:(id)a1 domain:(id)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (long long)_integerFromCFPreferencesForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (void)setSharedStoreReviewMetrics:(id)a0 forProcess:(id)a1;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (void)setDeviceOfferEligibility:(id)a0;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (id)_allKeysWithDomain:(id)a0;
+ (void)_setInteger:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1;
+ (void)_migrateValueToDatabase:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (BOOL)_boolFromDatabaseForKey:(id)a0 defaultValue:(BOOL)a1 domain:(id)a2 error:(id *)a3;
+ (id)bagURLCookies;
+ (BOOL)_setBoolWithDatabase:(BOOL)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_setValueWithCFPreferences:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (BOOL)_setValueWithDatabase:(id)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_migrateIntegerToDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (id)_valueForKey:(id)a0 domain:(id)a1;
+ (void)_setIntegerWithCFPreferences:(long long)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (id)deviceOfferEligibility;
+ (BOOL)_setIntegerWithDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_setBoolWithCFPreferences:(BOOL)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (id)_valueFromDatabaseForKey:(id)a0 domain:(id)a1 error:(id *)a2;

@end
