@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (BOOL)oldFullMode;
+ (id)applicationID;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (BOOL)fullModeForClass:(Class)a0;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (BOOL)isModelingDebugEnabled;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (id)allDefaultsEnabled;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)liteMode;
+ (id)sharedDefaults;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)enableRestartAtEPL;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)taskMode;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (BOOL)fullMode;
+ (int)liveModeQuery;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (BOOL)isModelTrigger;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (BOOL)boolForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (BOOL)eplEnabled;
+ (BOOL)fullPLLog;
+ (BOOL)isDevBoard;
+ (long long)mode;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)debugEnabled;
+ (BOOL)isTaskFullEPLMode;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;

- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
