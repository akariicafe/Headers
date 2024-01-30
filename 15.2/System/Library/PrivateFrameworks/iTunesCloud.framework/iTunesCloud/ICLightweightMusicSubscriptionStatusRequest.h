@class ICStoreRequestContext, ICLightweightMusicSubscriptionStatusResponse;

@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICLightweightMusicSubscriptionStatusResponse *_response;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (void)execute;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0;
- (void)_finishWithExtendedSubscriptionStatusResponse:(id)a0 error:(id)a1;

@end
