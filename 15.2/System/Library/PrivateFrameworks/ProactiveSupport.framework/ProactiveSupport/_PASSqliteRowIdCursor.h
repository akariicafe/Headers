@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;

- (unsigned long long)outputRowId;
- (unsigned long long)currentIndexedRowId;
- (BOOL)currentIndexEof;

@end
