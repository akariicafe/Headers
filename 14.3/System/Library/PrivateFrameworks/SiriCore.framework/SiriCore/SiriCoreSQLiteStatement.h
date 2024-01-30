@interface SiriCoreSQLiteStatement : NSObject {
    struct sqlite3_stmt { } *_impl;
    BOOL _finalizeWhenDone;
}

- (void)clearBindings;
- (struct sqlite3_stmt { } *)impl;
- (void)reset;
- (void)dealloc;
- (id)initWithImpl:(struct sqlite3_stmt { } *)a0 finalizeWhenDone:(BOOL)a1;

@end
