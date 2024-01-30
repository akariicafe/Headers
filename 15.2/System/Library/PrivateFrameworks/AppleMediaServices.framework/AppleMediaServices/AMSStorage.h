@class NSDictionary;

@interface AMSStorage : NSObject

@property (class, retain, nonatomic) NSDictionary *mediaTokens;
@property (class, retain, nonatomic) NSDictionary *bagURLCookies;
@property (class, retain, nonatomic) NSDictionary *deviceOfferEligibility;

+ (void)_setBool:(BOOL)a0 forKey:(id)a1;
+ (id)_valueForKey:(id)a0 domain:(id)a1;
+ (id)_valueForKey:(id)a0;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)_randomDouble;
+ (id)_valueFromDatabaseForKey:(id)a0 domain:(id)a1 error:(id *)a2;
+ (id)_valueFromCFPreferencesForKey:(id)a0 domain:(struct __CFString { } *)a1;
+ (BOOL)shouldSampleWithPercentage:(double)a0 sessionDuration:(double)a1 identifier:(id)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (BOOL)_setBoolWithDatabase:(BOOL)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (long long)_integerFromDatabaseForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2 error:(id *)a3;
+ (BOOL)_setValueWithDatabase:(id)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_migrateIntegerToDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_migrateValueToDatabase:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_cleanupSampleSessions;
+ (void)shouldSampleWithPercentageValue:(id)a0 sessionDurationValue:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;
+ (id)_allKeysWithDomain:(id)a0;
+ (id)sharedStoreReviewMetricsForProcess:(id)a0;
+ (void)_setBoolWithCFPreferences:(BOOL)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerFromCFPreferencesForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(id)a2;
+ (void)_setValueWithCFPreferences:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setInteger:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (BOOL)_setIntegerWithDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (BOOL)_boolFromDatabaseForKey:(id)a0 defaultValue:(BOOL)a1 domain:(id)a2 error:(id *)a3;
+ (BOOL)_boolFromCFPreferencesForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (BOOL)_resultFromSampleSession:(id)a0 isActive:(BOOL *)a1;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2;
+ (void)_setIntegerWithCFPreferences:(long long)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (void)setSharedStoreReviewMetrics:(id)a0 forProcess:(id)a1;
+ (void)_migrateBoolToDatabase:(BOOL)a0 forKey:(id)a1 domain:(id)a2;

@end
