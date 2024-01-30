@interface HDClinicalGatewayEntity : HDHealthEntity

+ (id)propertyForSyncAnchor;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;

@end
