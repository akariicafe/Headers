@class RTDeviceLocationPredictor, RTHintManager, NSMutableDictionary, RTLocationAwarenessManager, NSObject, RTDefaultsManager, RTVisitFeedBuffer, RTPlatform, RTTimerManager, RTMetricManager, RTVisitLabeler, NSMutableSet, RTVisitMonitorState, RTLearnedLocationManager, RTLocationManager, RTTimer;
@protocol OS_dispatch_queue, RTVisitMonitorDelegate;

@interface RTVisitMonitor : NSObject {
    RTVisitFeedBuffer *_feedBuffer;
    RTTimer *_feedBufferTimer;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVisitLabeler *visitLabeler;
@property (retain, nonatomic) RTVisitMonitorState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long feedBufferReferenceCounter;
@property (nonatomic) unsigned long long lowConfidencePipelineReferenceCounter;
@property (nonatomic) unsigned long long highConfidencePipelineReferenceCounter;
@property (retain, nonatomic) NSMutableSet *pipelinesMonitoringRegion;
@property (retain, nonatomic) NSMutableDictionary *pipelines;
@property (nonatomic) BOOL monitoringVisitIncidents;
@property (nonatomic) BOOL monitoringLeechedVisitIncidents;
@property (nonatomic) BOOL monitoringLowConfidenceVisitIncidents;
@property (weak, nonatomic) id<RTVisitMonitorDelegate> delegate;

+ (id)bucketLocations:(id)a0 interval:(double)a1;
+ (id)regionWithRegionIdentifier:(id)a0 location:(id)a1 shouldNotifyForEntry:(BOOL)a2;
+ (id)hyperParameterForPipelineType:(unsigned long long)a0;
+ (long long)hintSourceForRegionCallbackType:(long long)a0;
+ (id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)a0;
+ (double)LocationHeartbeatWhileAwake;

- (id)_configurationForPipelineType:(unsigned long long)a0;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (void)_shutdown;
- (void)_startFeedBuffer;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)startMonitoringLeechedVisitIncidents;
- (unsigned long long)visitPipelineTypeOverride;
- (void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)a0;
- (void)_processLeechedLocations:(id)a0;
- (void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)_processRealtimeVisits:(id)a0 pipeline:(id)a1;
- (void)_batchProcess:(id)a0 fromDate:(id)a1 toDate:(id)a2 handler:(id /* block */)a3;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (void)setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)handleRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (BOOL)_setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 error:(id *)a2;
- (id)_modulesForPipelineType:(unsigned long long)a0 hyperParameter:(id)a1;
- (void).cxx_destruct;
- (void)handleVisitIncident:(id)a0;
- (id)init;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_setupRealtimePipelineWithType:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)_moduleWithName:(id)a0 pipelineType:(unsigned long long)a1 hyperParameter:(id)a2;
- (void)stopMonitoringVisitIncidents;
- (void)_processMatureLocations;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 queue:(id)a8 state:(id)a9 timerManager:(id)a10 visitLabeler:(id)a11;
- (void)logHintSourceUsageWithLocation:(id)a0;
- (void)_bootstrapPipeline:(id)a0 handler:(id /* block */)a1;
- (void)_stopFeedBuffer;
- (void)fetchVisitMonitorStatusWithHandler:(id /* block */)a0;
- (void)fetchVisitMonitorState:(id /* block */)a0;
- (void)_startFeedBufferTimer;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 queue:(id)a8 state:(id)a9 visitLabeler:(id)a10;
- (id)_createPipelineWithType:(unsigned long long)a0 name:(id)a1 lastVisit:(id)a2;
- (void)startMonitoringVisitIncidents;
- (void)onLeechedLocationsNotification:(id)a0;
- (void)stopMonitoringLeechedVisitIncidents;
- (void)handleLowConfidenceVisitIncident:(id)a0;
- (double)maxHorizontalAccuracyOverride;

@end
