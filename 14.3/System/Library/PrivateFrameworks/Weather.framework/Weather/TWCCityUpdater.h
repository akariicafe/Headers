@class WALocationPrivacySampler, NSString, NSLocale, WAForecastModelController;
@protocol WeatherUpdaterDelegate;

@interface TWCCityUpdater : NSObject

@property (readonly, nonatomic) WALocationPrivacySampler *locationGeocodingSampler;
@property (retain, nonatomic) WAForecastModelController *forecastModelController;
@property (weak, nonatomic) id<WeatherUpdaterDelegate> delegate;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *trackingParameter;

+ (id)sharedCityUpdater;

- (void)cancel;
- (void)updateWeatherForCities:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)configureWithLocationGeocodingSampler:(id)a0;
- (void)updateWeatherForCity:(id)a0;
- (void)updateWeatherForCities:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)isUpdatingCity:(id)a0;

@end
