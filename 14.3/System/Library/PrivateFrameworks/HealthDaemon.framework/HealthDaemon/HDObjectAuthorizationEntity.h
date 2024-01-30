@interface HDObjectAuthorizationEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)resetAuthorizationForObjects:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_insertCodableObjectAuthorizations:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)authorizationRecordsForSamples:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_setObjectAuthorizationRecords:(id)a0 syncProvenance:(long long)a1 skipErrors:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)a0 error:(id *)a1;
+ (id)authorizationStatusForSamplesOfType:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)uniquedColumns;
+ (BOOL)setObjectAuthorizationRecords:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)resetObjectAuthorizationRecordsForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
