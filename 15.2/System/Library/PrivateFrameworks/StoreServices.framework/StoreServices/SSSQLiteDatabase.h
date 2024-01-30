@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _isInTransaction;
    NSString *_protectionType;
    struct __CFDictionary { } *_statementCache;
    BOOL _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

@property BOOL takesTaskCompletionAssertions;
@property (copy, nonatomic) id /* block */ setupBlock;

+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;
+ (void)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(BOOL *)a1 didFinish:(BOOL *)a2 isCorrupt:(BOOL *)a3;
+ (void)_setTakesTaskCompletionAssertions:(BOOL)a0;

- (id)initWithDatabaseURL:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)setUserVersion:(long long)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)accessDatabaseUsingBlock:(id /* block */)a0;
- (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { } *)a0;
- (void)endTaskCompletionAssertion;
- (BOOL)setUserVersion:(long long)a0 forDatabase:(id)a1;
- (long long)userVersion;
- (struct sqlite3_stmt { } *)_statementForSQL:(id)a0 cache:(BOOL)a1;
- (BOOL)executeSQL:(id)a0;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { } *)a0;
- (int)_openFlags;
- (void)_beginTaskCompletionAssertion;
- (void)_endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (void)dispatchBlockSync:(id /* block */)a0;
- (void)_expireBackgroundTask;
- (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { } *)a0;
- (void)_resetCorruptDatabase;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (int)_closeDatabase;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1 protectionType:(id)a2;
- (BOOL)columnName:(id)a0 existsInTable:(id)a1;
- (int)_resetAndReopenDatabaseWithPath:(id)a0;
- (void)expireBackgroundTask;
- (void)_resetDatabaseWithPath:(id)a0;
- (void)dispatchBlockAsync:(id /* block */)a0;
- (int)_openDatabase;
- (long long)userVersionForDatabase:(id)a0;
- (void)dealloc;
- (void)_accessDatabaseUsingBlock:(id /* block */)a0;
- (void)prepareStatementForSQL:(id)a0 cache:(BOOL)a1 usingBlock:(id /* block */)a2;
- (long long)countChanges;

@end
