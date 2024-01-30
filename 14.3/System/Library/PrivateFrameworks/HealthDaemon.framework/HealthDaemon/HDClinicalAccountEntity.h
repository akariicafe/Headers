@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

@end
