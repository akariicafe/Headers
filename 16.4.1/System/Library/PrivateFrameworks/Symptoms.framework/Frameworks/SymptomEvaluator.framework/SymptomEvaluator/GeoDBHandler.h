@class LocationStateRelay, NSString, NSDate, ProxyAnalytics, CellularStateRelay, NSObject, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_queue;

@interface GeoDBHandler : NSObject <ProxyAnalyticsDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    unsigned int _adminState;
    CellularStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    LocationStateRelay *_locationRelay;
    id _relayReadyObserver;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    NSString *_cellPublicIPPrefix;
    NSString *_wifiPublicIPPrefix;
    NSString *_lastReportedCellPrefix;
    NSString *_lastReportedWiFiPrefix;
    NSDate *_lastReportedCellPrefixDate;
    NSDate *_lastReportedWiFiPrefixDate;
    BOOL _adminStateSettled;
    BOOL _observingSystemSettingsRelay;
    BOOL _cellEpochReady;
    BOOL _wifiEpochReady;
}

@property (retain, nonatomic) ProxyAnalytics *proxyAnalytics;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)_administrativeEnable;
- (void)_administrativeDisable;
- (void)submitGeoDBAttributes:(id)a0;
- (void)completeInitialization;
- (void)requestReverseGeocodeCompleteForLatitude:(double)a0 longitude:(double)a1 interfaceType:(long long)a2 adminArea:(id)a3 countryCode:(id)a4 error:(id)a5;
- (void)processSymptomForInterfaceType:(long long)a0;
- (void)dealloc;
- (BOOL)shouldHandleGeoDB;
- (BOOL)processSymptom:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (long long)nwInterfaceTypeFromAPSDInterface:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)requestReverseGeocodeForLatitude:(double)a0 longitude:(double)a1 reply:(id /* block */)a2;

@end
