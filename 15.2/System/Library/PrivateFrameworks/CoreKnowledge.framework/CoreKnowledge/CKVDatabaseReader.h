@class NSString, CKVDatabaseConnection, CKVProvisionalResourceManager;

@interface CKVDatabaseReader : NSObject <CKVDatabaseReadOnlyAccess> {
    CKVDatabaseConnection *_connection;
    double _lifespan;
    CKVProvisionalResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerForDatabaseAtURL:(id)a0;

- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (BOOL)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)deactivateWithError:(id *)a0;
- (id)init;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)initWithConnection:(id)a0 lifespan:(double)a1;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (void)dealloc;

@end
