@interface HDClinicalAccountEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)checkConstraints;
+ (id)propertyForSyncAnchor;

@end
