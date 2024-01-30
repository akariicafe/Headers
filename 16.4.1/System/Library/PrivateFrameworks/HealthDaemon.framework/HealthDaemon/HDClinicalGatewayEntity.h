@interface HDClinicalGatewayEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)propertyForSyncAnchor;

@end
