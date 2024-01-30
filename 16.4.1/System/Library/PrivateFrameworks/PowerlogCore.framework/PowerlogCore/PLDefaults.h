@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (BOOL)eplEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)fullPLLog;
+ (void)enableRestartAtEPL;
+ (id)sharedDefaults;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (id)objectForKey:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)taskMode;
+ (long long)mode;
+ (BOOL)objectExistsForKey:(id)a0;
+ (BOOL)liteMode;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (id)allDefaultsEnabled;
+ (id)applicationID;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)isModelingDebugEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (BOOL)isModelTrigger;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (BOOL)oldFullMode;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (int)liveModeQuery;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (BOOL)fullMode;
+ (BOOL)fullModeForClass:(Class)a0;
+ (BOOL)debugEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (BOOL)isDevBoard;

- (id)instancePrefsObjectForKey:(id)a0;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;

@end
