@interface HDDeviceEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)deviceEntityWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)deviceEntitiesWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithUUID:(id)a0 healthDatabase:(id)a1 error:(id *)a2;

- (id)deviceInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInHealthDatabase:(id)a0 error:(id *)a1;
- (id)creationDateInHealthDatabase:(id)a0 error:(id *)a1;

@end
