@class CKSQLiteDatabase;

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTable {
    CKSQLiteDatabase *_strongDatabase;
}

+ (Class)entryClass;
+ (id)dbProperties;
+ (id)dbTableName;

- (id)db;
- (id)deleteObject:(id)a0;
- (void)setTableGroup:(id)a0;
- (id)tableGroupsWithClass:(id)a0;
- (void).cxx_destruct;
- (id)updateGroupData:(id)a0;
- (id)invalidateGroup:(id)a0;
- (id)insertObject:(id)a0;
- (id)entryWithGroupName:(id)a0 error:(id *)a1;
- (void)updateLastUsedDate:(id)a0;

@end
