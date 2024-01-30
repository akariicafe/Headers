@interface PLCacheDeleteUtility : NSObject

+ (id)purgeableBlockWithInfo:(id)a0 withUrgency:(int)a1;
+ (BOOL)registerCacheDeleteFull;
+ (unsigned long long)purgeableSizeForVersionDirectory:(id)a0;
+ (unsigned long long)purgeBuildDirectory:(id)a0;
+ (void)traverseVersionDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (BOOL)registerCacheDelete;
+ (unsigned long long)enforceRetentionForVersionDirectory:(id)a0;
+ (id)periodicPurgeBlockWithInfo:(id)a0 withUrgency:(int)a1;
+ (void)traverseBuildDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (id)purgeBlockWithInfo:(id)a0 withUrgency:(int)a1;
+ (unsigned long long)purgeVersionDirectory:(id)a0;
+ (unsigned long long)enforceRetentionForDirectory:(id)a0 withMaxDays:(unsigned long long)a1;
+ (unsigned long long)purgeableSizeForBuildDirectory:(id)a0;

@end
