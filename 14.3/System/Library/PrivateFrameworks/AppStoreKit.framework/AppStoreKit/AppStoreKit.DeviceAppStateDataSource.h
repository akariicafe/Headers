@interface AppStoreKit.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ appQuery;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ queryQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ previouslyInstalledLibraryItems;
    void /* unknown type, empty encoding */ availableUpdatesCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;
- (void)didReceiveUpdateFromProductPage:(id)a0;

@end
