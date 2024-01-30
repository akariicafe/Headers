@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)propertyForSyncAnchor;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)checkConstraints;

@end
