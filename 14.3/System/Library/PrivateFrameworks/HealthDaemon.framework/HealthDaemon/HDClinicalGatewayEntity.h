@interface HDClinicalGatewayEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

@end
