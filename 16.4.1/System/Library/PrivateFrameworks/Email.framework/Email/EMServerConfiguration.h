@interface EMServerConfiguration : NSObject

+ (BOOL)refresh;
+ (id)getValueForKey:(id)a0;
+ (id)_userDefaultsKey;
+ (void)_assertNotMainThread;
+ (double)_cacheValidityInterval;
+ (id)_configurationLocation;
+ (void)_savePropertyList:(id)a0;
+ (BOOL)isCacheRecent;
+ (void)refreshAsync;

@end
