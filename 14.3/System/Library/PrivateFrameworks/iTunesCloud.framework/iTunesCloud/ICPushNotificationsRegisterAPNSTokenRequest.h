@class ICStoreRequestContext, NSData, ICPushNotificationsResponse;

@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSData *_token;
    ICPushNotificationsResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 token:(id)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
