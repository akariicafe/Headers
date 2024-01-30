@class NSMutableDictionary, RTDeviceLocationPredictor, RTHintManager, RTLocationAwarenessManager, NSObject, RTDefaultsManager, RTVisitFeedBuffer, RTPlatform, RTTimerManager, RTMetricManager, RTVisitLabeler, NSMutableSet, RTVisitMonitorState, RTLocationManager, RTTimer;
@protocol OS_dispatch_queue, RTVisitMonitorDelegate;

@interface RTVisitMonitor : NSObject {
    RTVisitFeedBuffer *_feedBuffer;
    RTTimer *_feedBufferTimer;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
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

+ (id)hyperParameterForPipelineType:(unsigned long long)a0;
+ (id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)a0;
+ (long long)hintSourceForRegionCallbackType:(long long)a0;
+ (id)bucketLocations:(id)a0 interval:(double)a1;
+ (double)LocationHeartbeatWhileAwake;
+ (id)regionWithRegionIdentifier:(id)a0 location:(id)a1 shouldNotifyForEntry:(BOOL)a2;

- (void)_shutdown;
- (void)onLeechedLocationsNotification:(id)a0;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoringVisitIncidents;
- (void)_processLeechedLocations:(id)a0;
- (void)stopMonitoringVisitIncidents;
- (void)_setupRealtimePipelineWithType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)handleRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)_processMatureLocations;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 locationAwarenessManager:(id)a3 locationManager:(id)a4 metricManager:(id)a5 platform:(id)a6 queue:(id)a7 state:(id)a8 timerManager:(id)a9 visitLabeler:(id)a10;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (id)_moduleWithName:(id)a0 pipelineType:(unsigned long long)a1 hyperParameter:(id)a2;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)handleVisitIncident:(id)a0;
- (void)handleLowConfidenceVisitIncident:(id)a0;
- (void)_startFeedBuffer;
- (void)logHintSourceUsageWithLocation:(id)a0;
- (void)setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)_bootstrapPipeline:(id)a0 handler:(id /* block */)a1;
- (id)_modulesForPipelineType:(unsigned long long)a0 hyperParameter:(id)a1;
- (void)_batchProcess:(id)a0 fromDate:(id)a1 toDate:(id)a2 handler:(id /* block */)a3;
- (void)fetchVisitMonitorStatusWithHandler:(id /* block */)a0;
- (void)_processRealtimeVisits:(id)a0 pipeline:(id)a1;
- (void)startMonitoringLeechedVisitIncidents;
- (void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 locationAwarenessManager:(id)a3 locationManager:(id)a4 metricManager:(id)a5 platform:(id)a6 queue:(id)a7 state:(id)a8 visitLabeler:(id)a9;
- (void)_startFeedBufferTimer;
- (void)fetchVisitMonitorState:(id /* block */)a0;
- (unsigned long long)visitPipelineTypeOverride;
- (void)_stopFeedBuffer;
- (double)maxHorizontalAccuracyOverride;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (id)_createPipelineWithType:(unsigned long long)a0 name:(id)a1 lastVisit:(id)a2;
- (id)_configurationForPipelineType:(unsigned long long)a0;
- (void)stopMonitoringLeechedVisitIncidents;
- (BOOL)_setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 error:(id *)a2;

@end
