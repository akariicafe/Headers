@class ATAsset, ATStoreDownloadOperationResult;

@interface ATStoreDownloadOperation : ICRequestOperation

@property (nonatomic) ATStoreDownloadOperationResult *_operationResult;
@property (readonly, nonatomic) ATAsset *asset;

- (id)initWithAsset:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0 operationResult:(id)a1;
- (void)performOnOperationQueue:(id)a0 completion:(id /* block */)a1;

@end
