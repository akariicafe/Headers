@class NSURL, RMConfigurationStatusUpdater;

@interface RMSubscriberStore : RMBaseStore <NSSecureCoding, RMAssetResolverProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *statusDirectoryURL;
@property (readonly, nonatomic) RMConfigurationStatusUpdater *statusUpdater;

+ (void)storesWithCompletionHandler:(id /* block */)a0;
+ (void)subscribedStoreDeclarationsforConfigurationTypes:(id)a0 completionHandler:(id /* block */)a1;
+ (void)storeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToStore:(id)a0;
- (void)resolveAsset:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 name:(id)a2 description:(id)a3 accountIdentifier:(id)a4 defaultToInteractive:(BOOL)a5 dataSeparated:(BOOL)a6 personaIdentifier:(id)a7 statusDirectoryURL:(id)a8 statusUpdater:(id)a9;

@end
