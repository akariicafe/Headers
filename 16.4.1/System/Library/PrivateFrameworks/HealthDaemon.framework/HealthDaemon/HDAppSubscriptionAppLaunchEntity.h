@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (unsigned int)appSDKVersionForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (BOOL)setLaunchTime:(id)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)removeBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)launchTimeForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)tableAliases;
+ (BOOL)insertOrUpdateAppSDKVersion:(unsigned int)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;

@end
