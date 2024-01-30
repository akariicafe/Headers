@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation

@property (nonatomic) BOOL shouldRequestLightweightStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic) BOOL allowsFuseHeaderEnrichment;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (id)initWithRequest:(id)a0;
- (void)_cacheAccountEligibilityWithStatus:(id)a0 requestContext:(id)a1;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)a0 subscriptionStatusURL:(id)a1 allowsAuthentication:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)a0;

@end
