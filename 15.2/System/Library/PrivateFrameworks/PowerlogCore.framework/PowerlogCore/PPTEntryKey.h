@interface PPTEntryKey : NSObject

+ (int)storageForEntryKey:(id)a0;
+ (id)categoryForEntryKey:(id)a0;
+ (id)entryKeyForMetric:(id)a0;
+ (id)subsystemForEntryKey:(id)a0;
+ (id)allEntryKeysForStorage:(int)a0;
+ (id)entryKeyFromSelector:(id)a0;
+ (id)versionHashForEntryKey:(id)a0;
+ (BOOL)pptEnabled:(id)a0;
+ (id)metricsForEntryKey:(id)a0;
+ (id)allEntryKeys;
+ (void)setupEntryKeyForMetric:(id)a0;
+ (id)entrySelectorForMetric:(id)a0;
+ (id)allKeysForEntryKey:(id)a0;
+ (long long)timeToLiveForEntryKey:(id)a0;

@end
