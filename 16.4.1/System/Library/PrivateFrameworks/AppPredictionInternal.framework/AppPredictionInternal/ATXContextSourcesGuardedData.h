@class ATXMotionManagerWrapper, ATXAmbientLightMonitor, ATXLocationManager, ATXBiomePredictionContextStream, ATXBiomeLocationStream, _ATXAppInfoManager;

@interface ATXContextSourcesGuardedData : NSObject

@property (readonly, nonatomic) _ATXAppInfoManager *appInfoManager;
@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) ATXMotionManagerWrapper *motionManagerWrapper;
@property (readonly, nonatomic) ATXAmbientLightMonitor *ambientLightMonitor;
@property (readonly, nonatomic) Class deviceStateMonitorClass;
@property (readonly, nonatomic) BOOL contextSourcesInitialized;
@property (readonly, nonatomic) ATXBiomePredictionContextStream *predictionContextStream;
@property (readonly, nonatomic) ATXBiomeLocationStream *locationStream;
@property (readonly, nonatomic) BOOL biomeStreamsInitialized;

- (void)updateAppInfoManager:(id)a0 locationManager:(id)a1 motionManagerWrapper:(id)a2 ambientLightMonitor:(id)a3 deviceStateMonitorClass:(Class)a4 contextSourcesInitialized:(BOOL)a5;
- (void)updatePredictionContextStream:(id)a0 locationStream:(id)a1 biomeStreamsInitialized:(BOOL)a2;
- (void).cxx_destruct;

@end
