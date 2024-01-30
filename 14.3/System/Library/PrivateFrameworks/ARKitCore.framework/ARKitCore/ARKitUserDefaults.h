@interface ARKitUserDefaults : NSObject

+ (id)objectForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (id)numberForKey:(id)a0;
+ (id)defaultValues;
+ (id)stringForKey:(id)a0;
+ (id)valueForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (void)synchronize;
+ (long long)integerForKey:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (id)cachedObjectForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (void)removeAllKeys;
+ (void)cacheObject:(id)a0 forKey:(id)a1;
+ (BOOL)shouldUseCache;
+ (id)objectForKey:(id)a0 useCache:(BOOL)a1;
+ (id)objectForKeySlow:(id)a0;
+ (id)userDefaultsCache;
+ (void)removeCachedObjectForKey:(id)a0;
+ (id)keysWhitelistedForProcessEnvironmentOverride;
+ (void)clearUserDefaultsCache;
+ (id)listForKey:(id)a0;
+ (id)resolutionDictionaryForKey:(id)a0;

@end
