@class ICStoreRequestContext, ICIAMSynchronizeMessagesResponse;

@interface ICInAppMessageSyncRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICIAMSynchronizeMessagesResponse *_syncResponse;
    unsigned long long _fromRevision;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)a0 fromRevision:(unsigned long long)a1;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
