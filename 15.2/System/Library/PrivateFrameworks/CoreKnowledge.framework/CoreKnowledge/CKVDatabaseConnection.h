@class NSString, NSObject;
@protocol CKVDatabase;

@interface CKVDatabaseConnection : NSObject <CKVDatabaseReadOnlyAccess, CKVDatabaseReadWriteAccess> {
    NSObject<CKVDatabase> *_db;
    BOOL _inTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionToDatabaseAtURL:(id)a0 openMode:(long long)a1;

- (id)initWithDatabase:(id)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (BOOL)executeCommand:(id)a0 error:(id *)a1;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)executeCommand:(id)a0 error:(id *)a1 returningRow:(id *)a2;
- (id)init;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)beginTransactionWithError:(id *)a0;
- (void)dealloc;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)_getRowResultsOfSelect:(id)a0 outRows:(id *)a1 error:(id *)a2;
- (BOOL)cleanupWithError:(id *)a0;
- (BOOL)_createTableWithRecordClass:(Class)a0 error:(id *)a1;

@end
