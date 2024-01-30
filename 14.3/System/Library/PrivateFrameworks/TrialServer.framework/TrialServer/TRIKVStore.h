@class TRIDatabase;

@interface TRIKVStore : NSObject {
    TRIDatabase *_db;
}

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)blobForKey:(id)a0 usingTransaction:(id)a1;
- (void)setBlob:(id)a0 forKey:(id)a1 usingTransaction:(id)a2;
- (void)removeBlobForKey:(id)a0 usingTransaction:(id)a1;

@end
