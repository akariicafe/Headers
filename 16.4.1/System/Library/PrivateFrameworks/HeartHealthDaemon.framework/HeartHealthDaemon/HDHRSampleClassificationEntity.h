@interface HDHRSampleClassificationEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)_insertEntityWithSampleUUID:(id)a0 classification:(long long)a1 sampleStartDate:(id)a2 sampleDuration:(double)a3 sampleTimeZone:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (id)allSampleClassificationsWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)deleteAllClassificationsWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)deleteClassificationWithSampleUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)insertSampleClassification:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)sampleClassificationWithSampleUUID:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
