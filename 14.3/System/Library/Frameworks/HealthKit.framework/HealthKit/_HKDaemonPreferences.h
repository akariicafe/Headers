@interface _HKDaemonPreferences : NSObject

@property (class, readonly, nonatomic) BOOL usingDemoDataDatabase;

+ (BOOL)isGenerateDemoDataSet;
+ (void)synchronizePreferencesWithWatch:(id)a0;
+ (id)valueForKey:(id)a0;
+ (BOOL)shouldGenerateDemoData;
+ (BOOL)isStoreDemoModeSet;
+ (BOOL)setValue:(id)a0 forKey:(id)a1;
+ (id)_safePreferenceForKey:(id)a0 expectedReturnClass:(Class)a1;
+ (BOOL)_boolValueForKey:(id)a0;
+ (BOOL)_setPreferenceValue:(void *)a0 forKey:(id)a1;

@end
