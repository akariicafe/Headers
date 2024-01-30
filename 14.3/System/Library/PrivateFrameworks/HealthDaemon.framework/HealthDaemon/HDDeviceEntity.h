@interface HDDeviceEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)deviceEntityWithUUID:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)_propertiesForDevice;
+ (id)deviceEntitiesWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)_predicateForDevice:(id)a0;
+ (id)_sqlPropertyForPredicateProperty:(id)a0;
+ (id)_deviceWithRow:(struct HDSQLiteRow { } *)a0;
+ (id)_deviceEntitiesWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)_predicateForDeviceProperty:(id)a0 withValues:(id)a1;
+ (id)_insertDeviceWithUUID:(id)a0 creationDate:(double)a1 name:(id)a2 manufacturer:(id)a3 model:(id)a4 hardwareVersion:(id)a5 firmwareVersion:(id)a6 softwareVersion:(id)a7 localIdentifier:(id)a8 UDIDeviceIdentifier:(id)a9 syncProvenance:(long long)a10 database:(id)a11 error:(id *)a12;
+ (BOOL)_validateCodableDevice:(id)a0 error:(id *)a1;
+ (id)uniquedColumns;
+ (id)_deviceEntityWithDevice:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)_predicateForDeviceWithUUID:(id)a0;
+ (id)_codableDeviceWithRow:(struct HDSQLiteRow { } *)a0;
+ (BOOL)_insertCodableDevices:(id)a0 syncStore:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (id)deviceEntityWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;

- (id)deviceUUIDInDatabase:(id)a0 error:(id *)a1;
- (id)deviceInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInHealthDatabase:(id)a0 error:(id *)a1;
- (id)creationDateInHealthDatabase:(id)a0 error:(id *)a1;

@end
