@interface HDPendingAssociationEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)indices;
+ (id)uniquedColumns;

@end
