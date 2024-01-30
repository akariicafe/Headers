@class NSDictionary, CKContainer;

@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {
    NSDictionary *_subscriptions;
    CKContainer *_container;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 container:(id)a2 subscriptions:(id)a3;
- (void)registerSubscriptionsWithIdentifer:(id)a0 database:(id)a1;

@end
