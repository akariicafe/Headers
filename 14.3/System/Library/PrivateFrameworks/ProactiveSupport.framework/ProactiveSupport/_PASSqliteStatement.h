@class _PASSQLColumnMapping, _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <NSCopying> {
    _PASSqliteDatabase *_owner;
    _PASSQLColumnMapping *_columnMapping;
}

@property (readonly, nonatomic) struct sqlite3_stmt { } *stmt;

- (id)getInt64AsNSNumberForColumnAlias:(const char *)a0;
- (int)bindParam:(int)a0 toNSDictionary:(id)a1;
- (int)_bindParam:(int)a0 toCollection:(id)a1 sqliteMethodName:(const char *)a2;
- (long long)getIntegerForColumnAlias:(const char *)a0;
- (int)bindNamedParam:(const char *)a0 toDouble:(double)a1;
- (int)bindParam:(int)a0 toInt64:(long long)a1;
- (int)bindParam:(int)a0 toNSString:(id)a1;
- (id)init;
- (id)getNSDataForColumnAlias:(const char *)a0;
- (int)bindNamedParam:(const char *)a0 toNSData:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)bindNamedParam:(const char *)a0 toNSSet:(id)a1;
- (int)bindParam:(int)a0 toNSOrderedSet:(id)a1;
- (BOOL)isColumnNull:(int)a0;
- (int)bindNamedParam:(const char *)a0 toNSString:(id)a1;
- (int)bindParam:(int)a0 toNSIndexSet:(id)a1;
- (void)dealloc;
- (int)bindNamedParam:(const char *)a0 toDoubleAsNSNumber:(id)a1;
- (int)bindParam:(int)a0 toDouble:(double)a1;
- (double)getDoubleForColumn:(int)a0;
- (double)getDoubleForColumnAlias:(const char *)a0;
- (long long)getInt64ForColumnAlias:(const char *)a0;
- (id)getDoubleAsNSNumberForColumnName:(const char *)a0 table:(const char *)a1;
- (int)bindNamedParam:(const char *)a0 toNSOrderedSet:(id)a1;
- (id)getDoubleAsNSNumberForColumn:(int)a0;
- (id)initWithStatementPointer:(struct sqlite3_stmt { } *)a0 owner:(id)a1;
- (void)prepareForRowDeserialization;
- (int)bindNamedParamToNull:(const char *)a0;
- (id)description;
- (double)getDoubleForColumnName:(const char *)a0 table:(const char *)a1;
- (int)bindNamedParam:(const char *)a0 toNSDictionary:(id)a1;
- (BOOL)isNullForColumnAlias:(const char *)a0;
- (id)getNSStringForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getNSStringForColumn:(int)a0;
- (int)bindParam:(int)a0 toInt64AsNSNumber:(id)a1;
- (int)bindNamedParam:(const char *)a0 toInteger:(long long)a1;
- (id)getInt64AsNSNumberForColumn:(int)a0;
- (int)bindNamedParam:(const char *)a0 toInt64AsNSNumber:(id)a1;
- (int)bindNamedParam:(const char *)a0 toNSIndexSet:(id)a1;
- (void)finalize;
- (long long)getIntegerForColumnName:(const char *)a0 table:(const char *)a1;
- (int)bindParam:(int)a0 toDoubleAsNSNumber:(id)a1;
- (int)bindParamToNull:(int)a0;
- (int)bindParam:(int)a0 toInteger:(long long)a1;
- (int)bindParam:(int)a0 toNSSet:(id)a1;
- (BOOL)isNullForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getNSDataForColumn:(int)a0;
- (int)bindNamedParam:(const char *)a0 toNSArray:(id)a1;
- (id)getNSStringForColumnAlias:(const char *)a0;
- (int)bindParam:(int)a0 toNSArray:(id)a1;
- (long long)getInt64ForColumn:(int)a0;
- (long long)getIntegerForColumn:(int)a0;
- (id)getDoubleAsNSNumberForColumnAlias:(const char *)a0;
- (int)bindNamedParam:(const char *)a0 toInt64:(long long)a1;
- (long long)getInt64ForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getNSDataForColumnName:(const char *)a0 table:(const char *)a1;
- (id)getInt64AsNSNumberForColumnName:(const char *)a0 table:(const char *)a1;
- (int)bindParam:(int)a0 toNSData:(id)a1;

@end
