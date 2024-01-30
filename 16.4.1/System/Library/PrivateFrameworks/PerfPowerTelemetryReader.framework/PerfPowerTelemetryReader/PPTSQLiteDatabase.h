@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface PPTSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __CFDictionary { } *_statementCache;
}

@property (readonly, copy, nonatomic) NSURL *databaseURL;

+ (BOOL)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(BOOL *)a1 error:(id *)a2;

- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (int)openForReadingWithError:(id *)a0;
- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (void)close;
- (void)_accessDatabaseUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)columnNamesForTable:(id)a0;
- (id)tableNames;
- (BOOL)executeSQL:(id)a0 shouldCache:(BOOL)a1 error:(id *)a2 bindingHandler:(id /* block */)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)_prepareStatementForSQL:(id)a0 shouldCache:(BOOL)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (struct sqlite3_stmt { } *)_statementForSQL:(id)a0 shouldCache:(BOOL)a1 error:(id *)a2;
- (void)clearStatementCache;
- (BOOL)tableWithName:(id)a0 containsColumnWithName:(id)a1;
- (id)typeForColumn:(id)a0 inTable:(id)a1 error:(id *)a2;

@end
