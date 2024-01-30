@interface AppStoreKit.RemotePersonalizationAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ registeredAdamIds;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ process;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)storeAccountDidChange;
- (void)didCompletePurchase:(id)a0;
- (void)registerPersonalizedAdamIds:(id)a0;

@end
