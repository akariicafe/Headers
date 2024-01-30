@class NSUserDefaults, NSDate;
@protocol ATXLocationManagerProtocol, ATXUpdatePredictionsDelegate;

@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource>

@property (retain, nonatomic) NSDate *now;
@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (readonly, nonatomic) id<ATXLocationManagerProtocol> locationManager;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

- (void)_start;
- (id)initWithLocationManager:(id)a0 userDefaults:(id)a1;
- (void)_registerNotificationListeners;
- (void)locationManagerDidEnterRegion:(id)a0;
- (void)locationManagerDidExitRegion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateMonitoredRegionsIfNecessaryWithReply:(id /* block */)a0;
- (void)dealloc;
- (id)_regionIdentifierForLocationOfInterestType:(long long)a0;

@end
