@class WFLocation, City, WFRequestOptions, NSDate, NSDictionary, NSLocale, WFAirQualityConditions, WFServiceConnection, WAForecastModel, NSCalendar, WACurrentForecast, NSString, WFWeatherConditions, NSArray, NSData, WFAggregateCommonRequest, NSError, WFNextHourPrecipitation;

@interface WAForecastOperation : NSOperation

@property (retain, nonatomic) WFWeatherConditions *currentWeatherConditions;
@property (retain, nonatomic) WACurrentForecast *currentConditions;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;
@property (retain, nonatomic) NSArray *dailyForecastConditions;
@property (retain, nonatomic) NSArray *hourlyForecastConditions;
@property (retain, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *sunset;
@property (retain, nonatomic) NSDate *sunrise;
@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSDictionary *links;
@property (retain, nonatomic) NSArray *severeWeatherEvents;
@property (retain, nonatomic) NSArray *changeForecasts;
@property (retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;
@property (retain, nonatomic) WFAggregateCommonRequest *aggregateRequest;
@property (nonatomic) BOOL isDay;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain) NSLocale *locale;
@property (retain) NSString *trackingParameter;
@property (nonatomic) BOOL shouldAttachRawAPIData;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) City *city;
@property (nonatomic) int units;
@property (retain, nonatomic) WFRequestOptions *requestOptions;
@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic) BOOL canGeocode;
@property (nonatomic) BOOL isLocationInGeocodeSample;
@property (readonly, nonatomic) WAForecastModel *forecastModel;

- (void)_failWithError:(id)a0;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)shouldRequestChangeInConditions;
- (void)_determineSunriseAndSunset;
- (void)_mapReferralLinks;
- (BOOL)_needsGeolocation;
- (id)initWithCity:(id)a0 onConnection:(id)a1;
- (id)initWithCity:(id)a0 withUnits:(int)a1 canGeocode:(BOOL)a2 onConnection:(id)a3;
- (id)initWithCity:(id)a0 withUnits:(int)a1 onConnection:(id)a2;
- (id)initWithCity:(id)a0 withUnits:(int)a1 requestOptions:(id)a2 canGeocode:(BOOL)a3 onConnection:(id)a4;
- (id)initWithLocation:(id)a0 onConnection:(id)a1;

@end
