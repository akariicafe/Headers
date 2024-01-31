@class CKSQLiteRefcountTable;

@interface CKSQLiteReferencedObjectTable : CKSQLiteTable {
    CKSQLiteRefcountTable *_refcountTable;
}

- (id)wakeFromDatabase;
- (void).cxx_destruct;
- (id)databaseReferenceValueForEntry:(id)a0 error:(id *)a1;
- (id)didCreateDatabaseTable;
- (id)entryForDatabaseReferenceValue:(id)a0 error:(id *)a1;
- (id)extraGroupTables:(id)a0;
- (id)lookupRefcountTable;
- (unsigned long long)refcountForEntry:(id)a0;
- (id)refcountTableName;
- (id)refcountTriggerSQLForProperty:(id)a0 inTable:(id)a1;
- (id)willStoreReferenceToUnsavedEntry:(id)a0;

@end
