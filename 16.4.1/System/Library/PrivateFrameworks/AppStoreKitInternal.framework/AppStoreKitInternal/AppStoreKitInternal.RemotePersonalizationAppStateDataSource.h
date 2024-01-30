@interface AppStoreKitInternal.RemotePersonalizationAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ registeredAdamIds;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ process;
}

- (void)storeAccountDidChange;
- (void)dealloc;
- (void)registerPersonalizedAdamIds:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didCompletePurchase:(id)a0;

@end
