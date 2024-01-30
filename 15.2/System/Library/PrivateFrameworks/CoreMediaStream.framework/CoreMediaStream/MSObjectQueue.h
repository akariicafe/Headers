@interface MSObjectQueue : NSObject {
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_statements;
}

@property (readonly) long long count;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (struct sqlite3_stmt { } *)_statementLabel:(id)a0 query:(const char *)a1;
- (void)appendObjectWrappers:(id)a0;
- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt { } *)a0 outSize:(long long *)a1;
- (id)allObjectWrappersMaxCount:(long long)a0;
- (id)objectWrappersWithZeroSizeMaxCount:(long long)a0;
- (id)smallestObjectWrappersTargetTotalSize:(long long)a0 maxCount:(long long)a1;
- (id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)a0;
- (void)removeObjectWrappersFromQueue:(id)a0;
- (void)removeAllObjectWrappersFromQueue;
- (void)commitErrorCountsForObjectWrappers:(id)a0;
- (void)commitObjectsWrappers:(id)a0;

@end
