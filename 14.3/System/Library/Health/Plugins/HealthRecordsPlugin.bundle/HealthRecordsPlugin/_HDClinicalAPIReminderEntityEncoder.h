@interface _HDClinicalAPIReminderEntityEncoder : HDEntityEncoder

- (id)createBareObject;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (id)_clientSourceForRow:(struct HDSQLiteRow { } *)a0 error:(id *)a1;

@end
