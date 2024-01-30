@interface _HDMedicationUserDomainConceptEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
