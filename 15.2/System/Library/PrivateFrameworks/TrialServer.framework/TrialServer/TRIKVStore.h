@class TRIDatabase;

@interface TRIKVStore : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (void)setBlob:(id)a0 forKey:(id)a1 usingTransaction:(id)a2;
- (id)blobForKey:(id)a0 usingTransaction:(id)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeBlobForKey:(id)a0 usingTransaction:(id)a1;
- (id)init;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;

@end
