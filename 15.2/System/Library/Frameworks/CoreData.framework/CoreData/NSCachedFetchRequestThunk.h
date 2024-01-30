@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {
    NSSQLiteStatement *_limitedStatement;
    NSSQLiteStatement *_unlimitedStatement;
    id _connection;
}

- (id)initForConnection:(id)a0;
- (void)dealloc;

@end
