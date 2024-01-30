@class NSError, NSData, ML3ServiceDatabaseImport;

@interface ML3ImportOperation : NSOperation {
    id /* block */ _clientCompletionHandler;
}

@property (readonly, nonatomic) unsigned long long importSource;
@property (readonly, nonatomic) ML3ServiceDatabaseImport *import;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) float progress;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSData *returnData;

+ (id)importOperationWithSourceType:(unsigned long long)a0 databaseImport:(id)a1;

- (void)setSuccess:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)longDescription;
- (void)main;
- (void)setProgress:(float)a0;
- (id /* block */)_clientCompletionHandler;
- (void)setError:(id)a0;
- (void)_writerTransactionWithBlock:(id /* block */)a0;
- (id)initWithDatabaseImport:(id)a0;
- (void)setReturnData:(id)a0;
- (void)_setClientCompletionHandler:(id /* block */)a0;

@end
