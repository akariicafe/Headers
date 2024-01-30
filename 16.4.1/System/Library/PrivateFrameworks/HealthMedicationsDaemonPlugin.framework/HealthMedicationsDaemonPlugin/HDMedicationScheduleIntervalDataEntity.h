@interface HDMedicationScheduleIntervalDataEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)_codableRepresentationForMedicationScheduleIntervalData:(id)a0;
+ (id)_medicationScheduleIntervalDataEntityPropertiesForModel;
+ (id)_medicationScheduleIntervalDataFromRow:(struct HDSQLiteRow { } *)a0;
+ (BOOL)addIntervalDataToCodable:(id)a0 withScheduleID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateMedicationScheduleIntervalDataWithOwnerID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)insertPersistableMedicationScheduleIntervalData:(id)a0 ownerID:(id)a1 database:(id)a2 error:(id *)a3;

@end
