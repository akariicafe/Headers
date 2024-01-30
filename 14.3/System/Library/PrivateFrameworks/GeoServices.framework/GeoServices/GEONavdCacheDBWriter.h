@interface GEONavdCacheDBWriter : GEODBWriter {
    struct sqlite3_stmt { } *_sqlInsertCache;
    struct sqlite3_stmt { } *_sqlDeleteRowForRowID;
    struct sqlite3_stmt { } *_sqlUpdateCache;
    struct sqlite3_stmt { } *_sqlDeleteAllRows;
}

- (id)initWithPath:(id)a0;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;
- (void)dealloc;
- (void)_openIfNecessary;
- (void)_deleteAllRows;
- (void)_createCacheTable;
- (long long)_insertWithKey:(id)a0 value:(id)a1;
- (void)_deleteRowsWithRowIDs:(id)a0;
- (BOOL)_updateRowId:(long long)a0 withKey:(id)a1 value:(id)a2;

@end
