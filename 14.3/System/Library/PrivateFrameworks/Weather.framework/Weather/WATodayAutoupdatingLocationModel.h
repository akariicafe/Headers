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

- (BOOL)shouldNotUseUpdatedLocation;
- (void)weatherPreferencesWereSynchronized;
- (BOOL)_reloadForecastData:(BOOL)a0;
- (void)clearLocationUpdateState;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldUseNewLocation:(id)a0 oldLocation:(id)a1;
- (void)dealloc;
- (void)checkIfNeedsToUpdate;
- (void)ubiquitousDefaultsDidChange:(id)a0;
- (void)syncLastUpdateTime;
- (id)forecastModel;
- (void)setCitySource:(unsigned long long)a0 fireNotification:(BOOL)a1;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(id /* block */)a0;
- (void)configureWithInitialCitySource:(unsigned long long)a0 locationServicesActive:(BOOL)a1;
- (void)configureWithLocationServicesActive:(BOOL)a0;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(id /* block */)a0;
- (id)initWithPreferences:(id)a0 effectiveBundleIdentifier:(id)a1;
- (void)_teardownLocationManager;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)a0;
- (void)_kickstartLocationManager;
- (void)_willDeliverForecastModel:(id)a0;
- (void)_persistStateWithModel:(id)a0;
- (BOOL)updateLocationTrackingStatus;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
