@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (int)indexForColumnAlias:(const char *)a0;
- (void)_ensureColumnMappingExists;
- (void)resetSearchHint;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)dealloc;

@end
