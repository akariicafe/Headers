@class ATXMotionManagerWrapper, ATXAmbientLightMonitor, ATXLocationManager, _ATXAppInfoManager;

@interface ATXContextSourcesGuardedData : NSObject

@property (readonly, nonatomic) _ATXAppInfoManager *appInfoManager;
@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) ATXMotionManagerWrapper *motionManagerWrapper;
@property (readonly, nonatomic) ATXAmbientLightMonitor *ambientLightMonitor;
@property (readonly, nonatomic) Class deviceStateMonitorClass;
@property (readonly, nonatomic) BOOL contextSourcesInitialized;

- (void)updateAppInfoManager:(id)a0 locationManager:(id)a1 motionManagerWrapper:(id)a2 ambientLightMonitor:(id)a3 deviceStateMonitorClass:(Class)a4 contextSourcesInitialized:(BOOL)a5;
- (void).cxx_destruct;

@end
