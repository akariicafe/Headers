@class NSString;

@interface PPSQLColumnMapping : NSObject {
    const struct PPCompactStringArray { } *_columnAliases;
    const struct PPCompactStringArray { } *_tableColumnNamesFromSchema;
    NSString *_uniqueTableName;
}

- (void).cxx_destruct;
- (int)indexForColumnAlias:(const char *)a0;
- (void)dealloc;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (id)initWithStatement:(id)a0;

@end
