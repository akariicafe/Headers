@class ATStoreDownloadOperationResult;

@interface ATStoreDownloadAssetsOperation : ATStoreDownloadOperation

@property (readonly, nonatomic) ATStoreDownloadOperationResult *prepareOperationResult;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 prepareOperationResult:(id)a1;

@end
