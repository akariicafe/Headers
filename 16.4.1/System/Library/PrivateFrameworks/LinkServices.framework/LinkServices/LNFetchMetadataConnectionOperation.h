@class LNBundleMetadata;

@interface LNFetchMetadataConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNBundleMetadata *metadata;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
