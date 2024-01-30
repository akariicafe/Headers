@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup

+ (BOOL)supportsGroupCreation;

- (BOOL)validateTables:(id)a0;
- (id)createTables;

@end
