@class ICStoreRequestContext, NSString, NSDictionary;

@interface ICInAppReportEventRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSString *_messageIdentifier;
    NSDictionary *_params;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)a0 messageIdentifier:(id)a1 params:(id)a2;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
