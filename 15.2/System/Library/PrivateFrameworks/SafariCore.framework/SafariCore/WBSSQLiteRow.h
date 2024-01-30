@interface WBSSQLiteRow : NSObject {
    struct sqlite3_stmt { } *_handle;
}

- (id)initWithStatement:(id)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (struct RawData { BOOL x0; void *x1; int x2; })uncopiedRawDataAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)stringAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (BOOL)boolAtIndex:(unsigned long long)a0;
- (id)initWithCurrentRowOfEnumerator:(id)a0;
- (int)intAtIndex:(unsigned long long)a0;
- (id)dataAtIndex:(unsigned long long)a0;
- (BOOL)_isNullAtIndex:(unsigned long long)a0;
- (id)init;
- (id)debugDictionaryRepresentationWithStatement:(id)a0;
- (id)uncopiedDataAtIndex:(unsigned long long)a0;

@end
