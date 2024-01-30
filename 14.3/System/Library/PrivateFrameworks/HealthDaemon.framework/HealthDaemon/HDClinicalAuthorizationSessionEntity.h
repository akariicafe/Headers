@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)checkConstraints;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)protectionClass;
+ (id)_accountJoinClausesForProperty:(id)a0;
+ (id)_gatewayJoinClausesForProperty:(id)a0;

@end
