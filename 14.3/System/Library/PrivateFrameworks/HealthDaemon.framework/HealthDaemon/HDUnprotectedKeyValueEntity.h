@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (BOOL)setBadge:(id)a0 forDomain:(long long)a1 profile:(id)a2 error:(out id *)a3;
+ (id)keyForNotificationDomain:(long long)a0 error:(out id *)a1;
+ (id)badgeForDomain:(long long)a0 profile:(id)a1 error:(out id *)a2;
+ (const char *)_insertStatementKey;
+ (long long)protectionClass;

@end
