@class NSString, NSTimer, CLLocationManager, CLLocation;
@protocol NSPPrivacyProxyLocationMonitorDelegate;

@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain, nonatomic) CLLocation *latestLocation;
@property (retain, nonatomic) NSTimer *locationMonitorTimer;
@property (nonatomic) BOOL isMonitoringEnabled;
@property (nonatomic, setter=setMonitorTimeInterval:) double monitorTimeInterval;
@property (weak, nonatomic) id<NSPPrivacyProxyLocationMonitorDelegate> delegate;
@property (readonly) BOOL isAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)startLocationMonitor;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (BOOL)checkSignificantLocationChange:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)geohashFromLocation:(id)a0;
- (id)init;
- (void)stopLocationMonitor;
- (void)setUserEventAgentTimer;
- (void)handleLocationUpdate:(id)a0;
- (BOOL)isCoreWLANAuthorized;
- (void)stop;

@end
