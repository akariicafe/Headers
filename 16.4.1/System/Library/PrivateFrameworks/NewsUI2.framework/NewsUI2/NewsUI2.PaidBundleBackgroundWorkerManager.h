@interface NewsUI2.PaidBundleBackgroundWorkerManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ backgroundFetchManager;
    void /* unknown type, empty encoding */ workerFactory;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ registeredWorkers;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
