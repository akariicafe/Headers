@class ICStoreRequestContext, NSData, ICPushNotificationsResponse;

@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSData *_token;
    ICPushNotificationsResponse *_response;
}

- (void)execute;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 token:(id)a1;

@end
