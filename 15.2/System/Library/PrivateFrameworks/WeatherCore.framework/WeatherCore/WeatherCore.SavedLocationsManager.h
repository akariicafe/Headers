@interface WeatherCore.SavedLocationsManager : NSObject <WCWeatherSharedPreferencesChangeObserver> {
    void /* unknown type, empty encoding */ savedLocations;
    void /* unknown type, empty encoding */ geocodeManager;
    void /* unknown type, empty encoding */ localKeyValueStore;
    void /* unknown type, empty encoding */ keyValueStoreProvider;
    void /* unknown type, empty encoding */ locationsReconciler;
    void /* unknown type, empty encoding */ locationMetadataManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notifyQueue;
}

- (void)sharedPreferencesChangedExternally;
- (void).cxx_destruct;
- (id)init;

@end
