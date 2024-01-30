@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) long long qualityOfService;
@property (readonly, nonatomic) long long storeSubscriptionAdamID;

- (id)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 storeSubscriptionAdamID:(long long)a1;

@end
