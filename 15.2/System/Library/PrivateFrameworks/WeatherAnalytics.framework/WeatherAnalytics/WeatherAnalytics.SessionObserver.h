@interface WeatherAnalytics.SessionObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ identificationService;
    void /* unknown type, empty encoding */ cellularRadioAccessTechnologyProvider;
    void /* unknown type, empty encoding */ locationAccessDataProvider;
    void /* unknown type, empty encoding */ locationDataProvider;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ loadedViaReferral;
    void /* unknown type, empty encoding */ startMethod;
}

- (void)pushMobileData;
- (void)pushOrientationData;
- (void)pushTemperatureScaleData;

@end
