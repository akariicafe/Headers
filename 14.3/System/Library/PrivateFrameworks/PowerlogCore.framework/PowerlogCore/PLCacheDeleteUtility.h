@interface PLCacheDeleteUtility : NSObject

+ (BOOL)registerCacheDelete;
+ (BOOL)registerCacheDeleteFull;
+ (void)traverseBuildDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (unsigned long long)purgeableSizeForBuildDirectory:(id)a0;
+ (void)traverseVersionDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (unsigned long long)purgeableSizeForVersionDirectory:(id)a0;
+ (unsigned long long)purgeBuildDirectory:(id)a0;
+ (unsigned long long)purgeVersionDirectory:(id)a0;
+ (unsigned long long)enforceRetentionForVersionDirectory:(id)a0;
+ (unsigned long long)enforceRetentionForDirectory:(id)a0 withMaxDays:(unsigned long long)a1;
+ (id)purgeableBlockWithInfo:(id)a0 withUrgency:(int)a1;
+ (id)purgeBlockWithInfo:(id)a0 withUrgency:(int)a1;
+ (id)periodicPurgeBlockWithInfo:(id)a0 withUrgency:(int)a1;

@end
