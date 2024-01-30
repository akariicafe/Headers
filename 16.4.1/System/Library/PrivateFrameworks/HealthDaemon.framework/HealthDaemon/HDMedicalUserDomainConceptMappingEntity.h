@interface HDMedicalUserDomainConceptMappingEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (BOOL)insertUserDomainConceptID:(long long)a0 medicalRecordID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)migrateMappingsFromUserDomainConceptID:(long long)a0 toUserDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)unitTest_medicalRecordIDsForUserDomainConceptID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)unitTest_userDomainConceptIDsForMedicalRecordID:(unsigned long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updateMappingFromRecordWithPersistentID:(long long)a0 withMapToUDCWithPersistentID:(long long)a1 toMapToUDCWithPersistentID:(long long)a2 transaction:(id)a3 error:(id *)a4;

@end
