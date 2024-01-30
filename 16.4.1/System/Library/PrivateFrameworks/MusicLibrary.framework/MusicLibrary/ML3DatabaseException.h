@class NSError;

@interface ML3DatabaseException : MLException

@property (readonly, nonatomic) NSError *sqliteError;

+ (id)databaseExceptionWithReason:(id)a0 sqliteError:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)raise;
- (void)_SQLITE_CORRUPT;
- (void)_SQLITE_ABORT;
- (void)_SQLITE_AUTH;
- (void)_SQLITE_BUSY;
- (void)_SQLITE_CANTOPEN;
- (void)_SQLITE_CONSTRAINT;
- (void)_SQLITE_DONE;
- (void)_SQLITE_EMPTY;
- (void)_SQLITE_ERROR;
- (void)_SQLITE_FORMAT;
- (void)_SQLITE_FULL;
- (void)_SQLITE_INTERNAL;
- (void)_SQLITE_INTERRUPT;
- (void)_SQLITE_IOERR;
- (void)_SQLITE_LOCKED;
- (void)_SQLITE_MISMATCH;
- (void)_SQLITE_MISUSE;
- (void)_SQLITE_NOLFS;
- (void)_SQLITE_NOMEM;
- (void)_SQLITE_NOTADB;
- (void)_SQLITE_NOTFOUND;
- (void)_SQLITE_PERM;
- (void)_SQLITE_PROTOCOL;
- (void)_SQLITE_RANGE;
- (void)_SQLITE_READONLY;
- (void)_SQLITE_ROW;
- (void)_SQLITE_SCHEMA;
- (void)_SQLITE_TOOBIG;
- (id)initWithReason:(id)a0 sqliteError:(id)a1;

@end
