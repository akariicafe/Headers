@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;

- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;
- (BOOL)currentIndexEof;

@end
