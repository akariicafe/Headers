@class CLGeocoder, City;

@interface TWCLocationUpdater : TWCCityUpdater

@property (retain, nonatomic) CLGeocoder *reverseGeocoder;
@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (retain, nonatomic) City *currentCity;

+ (id)sharedLocationUpdater;

- (id)init;
- (void).cxx_destruct;
- (void)updateWeatherForLocation:(id)a0 city:(id)a1 isFromFrameworkClient:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)updateWeatherForCity:(id)a0;
- (void)enableProgressIndicator:(BOOL)a0;
- (void)updateWeatherForCities:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateWeatherForLocation:(id)a0 city:(id)a1;
- (void)parsedResultCity:(id)a0;
- (void)_completeReverseGeocodeForLocation:(id)a0 currentCity:(id)a1 geocodeError:(id)a2 completionHandler:(id /* block */)a3;
- (void)_geocodeLocation:(id)a0 currentCity:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateWeatherForLocation:(id)a0 city:(id)a1 completionHandler:(id /* block */)a2;

@end
