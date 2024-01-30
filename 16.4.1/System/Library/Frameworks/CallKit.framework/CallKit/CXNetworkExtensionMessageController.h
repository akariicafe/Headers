@protocol CXNetworkExtensionMessageControllerDataSource;

@interface CXNetworkExtensionMessageController : NSObject

@property (readonly, nonatomic) id<CXNetworkExtensionMessageControllerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sendNetworkExtensionMessage:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)sendNetworkExtensionPushToTalkMessage:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;

@end
