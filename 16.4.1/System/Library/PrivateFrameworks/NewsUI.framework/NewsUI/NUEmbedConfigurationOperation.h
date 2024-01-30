@class NUEmbedConfigurationOperationResult, FCFlintResourceManager;
@protocol FCNewsAppConfigurationManager;

@interface NUEmbedConfigurationOperation : FCOperation

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) NUEmbedConfigurationOperationResult *result;
@property (copy, nonatomic) id /* block */ completion;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithAppConfigManager:(id)a0 flintResourceManager:(id)a1;

@end
