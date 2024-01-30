@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)resetSearchHint;
- (int)indexForColumnAlias:(const char *)a0;
- (void)dealloc;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)_ensureColumnMappingExists;

@end
