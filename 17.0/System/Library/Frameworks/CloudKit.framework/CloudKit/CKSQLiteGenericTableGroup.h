@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup

+ (id)groupEntryInDatabase:(id)a0 withGroupName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (id)createTables:(id *)a0;
- (long long)validateTableMatchesTOCEntry:(id)a0;

@end
