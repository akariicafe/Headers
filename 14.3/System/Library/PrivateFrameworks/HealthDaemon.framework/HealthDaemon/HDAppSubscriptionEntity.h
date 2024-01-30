@interface HDAppSubscriptionEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)allSubscriptionsForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)allSubscriptionsForType:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setLaunchTimeHysteresis:(id)a0 forBundleID:(id)a1 dataCode:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)addSubscriptionWithBundleID:(id)a0 dataCode:(long long)a1 updateFrequency:(unsigned long long)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)setLastAnchor:(id)a0 lastAckTime:(id)a1 forBundleID:(id)a2 dataCode:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)subscriptionForBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)_predicateForBundleID:(id)a0 dataCode:(long long)a1;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (id)_predicateForBundleIdentifier:(id)a0;
+ (id)_predicateForDataCode:(long long)a0;
+ (BOOL)removeSubscriptionsWithBundleID:(id)a0 dataCode:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)_subscriptionsWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
