@interface _HDMedicalRecordEntityEncoder : HDEntityEncoder

+ (BOOL)_applyConceptIndexToObject:(id)a0 profile:(id)a1 error:(id *)a2;
+ (void)_resetConceptIndexDueToError:(id)a0 profile:(id)a1;

- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObject;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
