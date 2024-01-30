@interface SiriCoreSQLiteStatement : NSObject {
    struct sqlite3_stmt { } *_impl;
    BOOL _finalizeWhenDone;
}

- (id)initWithImpl:(struct sqlite3_stmt { } *)a0 finalizeWhenDone:(BOOL)a1;
- (struct sqlite3_stmt { } *)impl;
- (void)dealloc;
- (void)clearBindings;
- (void)reset;

@end
