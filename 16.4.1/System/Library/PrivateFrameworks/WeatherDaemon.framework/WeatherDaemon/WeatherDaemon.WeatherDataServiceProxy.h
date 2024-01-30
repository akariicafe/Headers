@interface WeatherDaemon.WeatherDataServiceProxy : NSObject <WeatherDaemon.WeatherDataServiceProxyType> {
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ caching;
    void /* unknown type, empty encoding */ networkMonitor;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ appConfigurationSettingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_weatherService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_airQualityScaleService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_availabilityService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_weatherAlertService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataManager;
    void /* unknown type, empty encoding */ weatherDataRequestDeduper;
    void /* unknown type, empty encoding */ weatherHistoryRequestDeduper;
    void /* unknown type, empty encoding */ weatherInstantsRequestDeduper;
    void /* unknown type, empty encoding */ weatherInstantRequestDeduper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
}

- (void)performRequestsWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAirQualityScaleWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvailableDataSetsWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchHistoricalWeatherWith:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
