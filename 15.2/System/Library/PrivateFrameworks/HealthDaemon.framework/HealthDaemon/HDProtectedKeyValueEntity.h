@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (const char *)_insertStatementKey;
+ (long long)_deviceLocalCategory;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;

@end
