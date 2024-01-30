@class ICStoreRequestContext, NSString, ICPushNotificationsResponse;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}

- (void)execute;
- (void).cxx_destruct;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 notificationType:(id)a1;

@end
