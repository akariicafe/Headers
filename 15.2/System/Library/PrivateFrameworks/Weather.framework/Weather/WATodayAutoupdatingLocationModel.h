@class WeatherLocationManager, WeatherPreferences, NSString, WFGeocodeRequest, NSDate;

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate>

@property (retain, nonatomic) WFGeocodeRequest *geocodeRequest;
@property (nonatomic) BOOL isLocationTrackingEnabled;
@property (nonatomic) unsigned long long citySource;
@property (nonatomic) unsigned long long fallbackCitySource;
@property (retain, nonatomic) WeatherLocationManager *locationManager;
@property (nonatomic) BOOL stopUpdateIfNeeded;
@property (readonly, nonatomic) double minTimeBetweenUpdates;
@property (readonly, nonatomic) double minDistanceChangeInMeters;
@property (retain, nonatomic) NSDate *lastLocationUpdateDate;
@property (retain, nonatomic) WeatherPreferences *preferences;
@property (copy, nonatomic) id /* block */ WeatherLocationManagerGenerator;
@property (nonatomic) BOOL locationServicesActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithPreferences:(id)a0 effectiveBundleIdentifier:(id)a1;
- (void)configureWithLocationServicesActive:(BOOL)a0;
- (id)forecastModel;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)a0;
- (void)_willDeliverForecastModel:(id)a0;
- (void)_persistStateWithModel:(id)a0;
- (void)checkIfNeedsToUpdate;
- (void)clearLocationUpdateState;
- (void)weatherPreferencesWereSynchronized;
- (void)configureWithInitialCitySource:(unsigned long long)a0 locationServicesActive:(BOOL)a1;
- (void)setCitySource:(unsigned long long)a0 fireNotification:(BOOL)a1;
- (void)_teardownLocationManager;
- (BOOL)_reloadForecastData:(BOOL)a0;
- (void)_kickstartLocationManager;
- (BOOL)updateLocationTrackingStatus;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(id /* block */)a0;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseNewLocation:(id)a0 oldLocation:(id)a1;
- (void)ubiquitousDefaultsDidChange:(id)a0;
- (void)syncLastUpdateTime;
- (BOOL)shouldNotUseUpdatedLocation;

@end
