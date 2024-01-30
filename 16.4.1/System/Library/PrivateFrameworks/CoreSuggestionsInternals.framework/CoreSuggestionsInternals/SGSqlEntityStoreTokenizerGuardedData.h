@class _PASSqliteDatabase;

@interface SGSqlEntityStoreTokenizerGuardedData : NSObject {
    _PASSqliteDatabase *_db;
    struct sqlite3_tokenizer_module { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; struct sqlite3 *x6; } *_tokenizerModule;
    struct sqlite3_tokenizer { struct sqlite3_tokenizer_module *x0; } *_tokenizerInstance;
}

- (void).cxx_destruct;

@end
