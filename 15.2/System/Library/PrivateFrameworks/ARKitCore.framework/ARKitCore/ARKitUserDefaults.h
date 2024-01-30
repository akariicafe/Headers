@interface ARKitUserDefaults : NSObject

+ (float)floatForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (void)removeAllKeys;
+ (id)valueForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (void)cacheObject:(id)a0 forKey:(id)a1;
+ (void)clearUserDefaultsCache;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (long long)integerForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (id)resolutionDictionaryForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (id)objectForKey:(id)a0 useCache:(BOOL)a1;
+ (double)doubleForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)cachedObjectForKey:(id)a0;
+ (id)objectForKeySlow:(id)a0;
+ (void)removeCachedObjectForKey:(id)a0;
+ (void)synchronize;
+ (id)listForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)userDefaultsCache;
+ (BOOL)shouldUseCache;
+ (id)defaultValues;

@end
