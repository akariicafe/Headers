@interface HDSignedClinicalDataIssuerEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)allProperties;

@end
