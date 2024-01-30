@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)launchTimeForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_launchTimesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_predicateForBundleID:(id)a0;
+ (BOOL)removeBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setLaunchTime:(id)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)tableAliases;
+ (long long)protectionClass;

@end
