@class NSString, HMFUnfairLock, NSURL, NSOperationQueue;

@interface HMBSQLContext : HMFObject <HMFLogging> {
    struct sqlite3_stmt { } *_begin;
    struct sqlite3_stmt { } *_commit;
    struct sqlite3_stmt { } *_rollback;
}

@property (retain, nonatomic) HMFUnfairLock *lock;
@property (nonatomic) struct sqlite3 { } *context;
@property (nonatomic) BOOL finalized;
@property (retain, nonatomic) NSString *logIdentifier;
@property (nonatomic) unsigned long long mutation;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (unsigned long long)insertSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (BOOL)updateSchemaVersionTo:(long long)a0 error:(id *)a1;
- (id)sqlTransactionWithActivity:(id)a0 block:(id /* block */)a1;
- (id)initialize;
- (id)_prepareFrom:(id)a0;
- (id)sqlBlock:(id /* block */)a0;
- (id)sqlTransaction:(id /* block */)a0;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_finalize;
- (unsigned long long)execSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (long long)migrateFromSchemaVersion:(long long)a0 error:(id *)a1;
- (id)sqlBlockWithActivity:(id)a0 block:(id /* block */)a1;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;
- (id)begin;
- (BOOL)runSQLite3:(const char *)a0 error:(id *)a1;
- (void)rollback;
- (id)execSQLite3:(struct sqlite3_stmt { } *)a0;
- (BOOL)fetchSQLite3One:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 limit:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)runSQLite3:(const char *)a0;
- (void)finalize;
- (id)commit;
- (void)dealloc;
- (void)close;
- (id)attributeDescriptions;
- (id)prepare;
- (void).cxx_destruct;

@end
