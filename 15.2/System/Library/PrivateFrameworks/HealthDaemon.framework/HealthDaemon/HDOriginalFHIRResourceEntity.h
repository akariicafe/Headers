@interface HDOriginalFHIRResourceEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;

@end
