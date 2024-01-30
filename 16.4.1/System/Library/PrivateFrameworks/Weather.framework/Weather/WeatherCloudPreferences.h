@class WeatherPreferences, NSString;
@protocol WeatherPreferencesPersistence, SynchronizedDefaultsDelegate;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate>

@property (retain, nonatomic) id<WeatherPreferencesPersistence> cloudStore;
@property (retain) WeatherPreferences *localPreferences;
@property (weak, nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_synchronize:(BOOL)a0;
- (void)forceSync;
- (void)cloudPersistenceDidSynchronize:(id)a0;
- (BOOL)areCloudCities:(id)a0 equalToLocalCities:(id)a1;
- (id)citiesByEnforcingSizeLimitOnResults:(id)a0;
- (void)cloudCitiesChangedExternally:(id)a0;
- (id)cloudRepresentationFromCities:(id)a0;
- (id)initWithLocalPreferences:(id)a0;
- (id)initWithLocalPreferences:(id)a0 persistence:(id)a1;
- (id)prepareLocalCitiesForReconciliation:(id)a0 isInitialSync:(BOOL)a1;
- (void)purgeLegacyCloudCities;
- (id)reconcileCloudCities:(id)a0 withLocal:(id)a1 isInitialSync:(BOOL)a2;
- (void)saveCitiesToCloud:(id)a0;
- (void)setCloudStoreCities:(id)a0;
- (BOOL)shouldWriteCitiesToCloud:(id)a0;
- (void)updateLocalStoreWithRemoteChanges:(id)a0;

@end
