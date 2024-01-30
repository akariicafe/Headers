@interface HDPendingAssociationEntity : HDHealthEntity

+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

@end
