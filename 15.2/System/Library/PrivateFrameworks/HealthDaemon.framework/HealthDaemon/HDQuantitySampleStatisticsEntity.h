@interface HDQuantitySampleStatisticsEntity : HDHealthEntity

+ (id)databaseTable;
+ (BOOL)setDiscreteQuantitySampleStatistics:(id)a0 persistentID:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;

@end
