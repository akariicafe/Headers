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

- (id)reconcileCloudCities:(id)a0 withLocal:(id)a1 isInitialSync:(BOOL)a2;
- (void)updateLocalStoreWithRemoteChanges:(id)a0;
- (void)purgeLegacyCloudCities;
- (void).cxx_destruct;
- (id)initWithLocalPreferences:(id)a0 persistence:(id)a1;
- (id)prepareLocalCitiesForReconciliation:(id)a0 isInitialSync:(BOOL)a1;
- (void)setCloudStoreCities:(id)a0;
- (void)cloudPersistenceDidSynchronize:(id)a0;
- (id)cloudRepresentationFromCities:(id)a0;
- (id)initWithLocalPreferences:(id)a0;
- (void)forceSync;
- (BOOL)areCloudCities:(id)a0 equalToLocalCities:(id)a1;
- (void)saveCitiesToCloud:(id)a0;
- (BOOL)shouldWriteCitiesToCloud:(id)a0;
- (id)citiesByEnforcingSizeLimitOnResults:(id)a0;
- (void)_synchronize:(BOOL)a0;
- (void)cloudCitiesChangedExternally:(id)a0;

@end
