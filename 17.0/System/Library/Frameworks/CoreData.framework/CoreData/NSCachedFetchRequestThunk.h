@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {
    NSSQLiteStatement *_limitedStatement;
    NSSQLiteStatement *_unlimitedStatement;
    id _connection;
}

- (void)dealloc;
- (id)initForConnection:(id)a0;

@end
