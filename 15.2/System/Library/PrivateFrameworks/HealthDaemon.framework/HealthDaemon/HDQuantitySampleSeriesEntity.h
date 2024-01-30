@class NSString;

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)databaseTable;
+ (id)indices;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (BOOL)isConcreteEntity;
+ (BOOL)supportsObjectMerging;
+ (id)privateSubEntities;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (BOOL)migrateDataFromDataStore:(const void *)a0 to:(void *)a1 transaction:(id)a2 recoveryAnalytics:(id)a3 error:(id *)a4;
+ (long long)unitTesting_insertionEra;
+ (BOOL)migrateDataToSQLFromStore:(const void *)a0 transaction:(id)a1 error:(id *)a2;
+ (id)additionalPredicateForEnumeration;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)hasSeriesDataForHFDKey:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteSeriesFromSQLiteWithKey:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)freezeSeriesWithIdentifier:(id)a0 metadata:(id)a1 endDate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)deleteSeriesWithID:(id)a0 deleteHFDData:(BOOL)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)replaceObjectID:(id)a0 replacementObjectID:(id)a1 deleteOriginalHFDData:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)removeValues:(id)a0 fromQuantitySeriesSample:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateDataWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)insertValues:(id)a0 series:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)primitiveInsertValues:(id)a0 seriesVersion:(long long)a1 HFDKey:(long long)a2 insertToSQLite:(BOOL)a3 database:(id)a4 error:(id *)a5;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)enumerateDataWithIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (BOOL)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)enumerateRawDataWithTransaction:(id)a0 HFDKey:(long long)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)performPostJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)deleteSeriesFromHFDWithKey:(long long)a0 database:(id)a1 error:(id *)a2;
+ (void)unitTesting_updateInsertionEra;
+ (BOOL)performSeriesWriteTransactionWithProfile:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (BOOL)unitTesting_insertValues:(id)a0 quantitySample:(id)a1 seriesVersion:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)primitiveRemoveDatums:(id)a0 HFDKey:(long long)a1 deleteFromSQLite:(BOOL)a2 transaction:(id)a3 error:(id *)a4;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (Class)entityClassForEnumeration;

- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;
- (void)willDeleteFromDatabase:(id)a0;
- (id)HFDKeyWithDatabase:(id)a0 error:(id *)a1;
- (BOOL)insertValues:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)seriesSourceWithDatabase:(id)a0 error:(id *)a1;
- (BOOL)enumerateDataWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)startTimeEndTimeCountForSeriesWithTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)countForSeriesWithTransaction:(id)a0 error:(id *)a1;
- (id)freezeWithEndDate:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
- (id)hasSeriesDataWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)enumerateDataInInterval:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (BOOL)unitTesting_setInsertionEra:(long long)a0 profile:(id)a1 error:(id *)a2;

@end
