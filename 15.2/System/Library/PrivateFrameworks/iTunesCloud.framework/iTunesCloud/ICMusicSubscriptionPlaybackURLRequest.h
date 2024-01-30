@class NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (id)_actionType;
- (id)_signpostRequestInfo;
- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;

@end
