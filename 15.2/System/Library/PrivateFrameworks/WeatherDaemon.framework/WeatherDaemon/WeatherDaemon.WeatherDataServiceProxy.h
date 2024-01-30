@interface WeatherDaemon.WeatherDataServiceProxy : NSObject <WeatherDaemon.WeatherDataServiceProxyType> {
    void /* unknown type, empty encoding */ weatherService;
    void /* unknown type, empty encoding */ airQualityScaleService;
    void /* unknown type, empty encoding */ availabilityService;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ weatherDataRequestDeduper;
    void /* unknown type, empty encoding */ weatherHistoryRequestDeduper;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ authenticator;
}

- (void)performRequestsWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAirQualityScaleWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvailableDataSetsWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchHistoricalWeatherWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
