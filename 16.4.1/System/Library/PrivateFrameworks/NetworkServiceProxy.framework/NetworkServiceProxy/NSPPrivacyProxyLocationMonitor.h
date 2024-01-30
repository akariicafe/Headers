@class NSString, NSTimer, CLLocationManager, CLLocation;
@protocol NSPPrivacyProxyLocationMonitorDelegate;

@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate> {
    BOOL _isMonitoringEnabled;
    CLLocationManager *_clLocationManager;
    CLLocation *_latestLocation;
    NSString *_latestCountryPlusTimezone;
    NSTimer *_locationMonitorTimer;
    double _monitorTimeInterval;
    NSString *_lastGeohash;
}

@property (weak, nonatomic) id<NSPPrivacyProxyLocationMonitorDelegate> delegate;
@property (readonly) BOOL isAuthorized;
@property (readonly) NSString *currentCountryPlusTimezone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (BOOL)checkSignificantLocationChange:(id)a0;
- (BOOL)isCoreWLANAuthorized;
- (void)refreshCountryPlusTimezone:(id /* block */)a0;
- (id)geohashFromLocation:(id)a0;
- (void)setLastGeohash:(id)a0;
- (void)setUserEventAgentTimer;
- (void)setLastCountryPlusTimezone:(id)a0;
- (void)startLocationMonitor;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)handleLocationUpdate:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)stop;
- (void)stopLocationMonitor;
- (id)init;
- (void)start;
- (void)setMonitorTimeInterval:(double)a0;
- (void).cxx_destruct;

@end
