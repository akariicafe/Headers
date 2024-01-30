@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (id)outputKey;
- (BOOL)currentIndexEof;
- (id)currentIndexedKey;

@end
