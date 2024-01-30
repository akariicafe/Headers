@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasKey;
+ (const char *)sqliteCreateTableStatement;

- (id)currentIndexedKey;
- (id)outputKey;
- (BOOL)currentIndexEof;

@end
