@class NSDictionary, CKContainer;

@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {
    NSDictionary *_subscriptions;
    CKContainer *_container;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 container:(id)a2 subscriptions:(id)a3;

@end
