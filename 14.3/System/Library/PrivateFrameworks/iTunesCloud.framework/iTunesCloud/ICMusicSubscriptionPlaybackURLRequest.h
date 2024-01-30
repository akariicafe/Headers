@class NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
