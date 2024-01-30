@class WBSPrimaryAppleAccountObserver, WBSCloudSubscriptionFeatureAvailabilityObserver, AKPrivateEmailController;

@interface WBSHideMyEmailManager : NSObject {
    WBSPrimaryAppleAccountObserver *_accountObserver;
    WBSCloudSubscriptionFeatureAvailabilityObserver *_provisionNewHideMyEmailAvailabilityObserver;
    AKPrivateEmailController *_privateEmailController;
}

@property (class, readonly, nonatomic) WBSHideMyEmailManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)getRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)provisionRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performOperation:(unsigned long long)a0 withURL:(id)a1 completionHandler:(id /* block */)a2;

@end
