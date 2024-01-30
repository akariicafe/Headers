@interface AppStoreKitInternal.RemotePersonalizationAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ registeredAdamIds;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ process;
}

- (void)registerPersonalizedAdamIds:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didCompletePurchase:(id)a0;
- (void)storeAccountDidChange;

@end
