@interface AppStoreKitInternal.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ appQuery;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ isBetaAppsDataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ previouslyInstalledLibraryItems;
    void /* unknown type, empty encoding */ availableUpdatesCache;
    void /* unknown type, empty encoding */ greenTeaLogger;
    void /* unknown type, empty encoding */ adamIdsByBundleId;
    void /* unknown type, empty encoding */ betaAppBundleVersions;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;
- (void)didReceiveUpdateFromProductPage:(id)a0;

@end
