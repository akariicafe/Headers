@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation {
    NSString *_cellularProviderName;
    NSString *_mobileSubscriberCountryCode;
    NSString *_mobileSubscriberNetworkCode;
    NSString *_phoneNumber;
    NSString *_IMEI;
}

@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic, getter=isDeepLink) BOOL deepLink;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (void)_finishEnrichmentWithBodyDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (id)_newDefaultRequestBodyDictionary;
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)a0 error:(id)a1;
- (void)_sendEnrichmentRequestWithURL:(id)a0 preflightResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sendPreflightRequestWithCompletionHandler:(id /* block */)a0;
- (void)_sendSilentSMSRequestWithMessage:(id)a0 number:(id)a1 preflightResponse:(id)a2 completionHandler:(id /* block */)a3;

@end
