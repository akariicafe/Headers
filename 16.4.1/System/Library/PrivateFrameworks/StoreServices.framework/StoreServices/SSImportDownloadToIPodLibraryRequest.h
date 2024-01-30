@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest

@property (readonly, nonatomic) SSDownloadMetadata *downloadMetadata;
@property (readonly, nonatomic) SSPurchaseResponse *purchaseResponse;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithPurchase:(id)a0;
- (id)initWithDownloadMetadata:(id)a0;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
