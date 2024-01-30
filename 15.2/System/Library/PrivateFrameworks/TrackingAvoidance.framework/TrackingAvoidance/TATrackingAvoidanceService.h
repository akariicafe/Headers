@class NSString, TAOutgoingRequests, TASettings, NSHashTable, NSDate, TATrackingAvoidanceServiceSettings, TAStore;

@interface TATrackingAvoidanceService : NSObject <TAVisitStateObserver, TATrackingAvoidanceServiceProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *latestClassificationDate;
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings;
@property (retain, nonatomic) TAOutgoingRequests *stagedIntervisitMetrics;
@property (readonly, nonatomic) TAStore *store;
@property (readonly, nonatomic) TASettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)filterAndStageDetectionResults:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (BOOL)shouldPerformDetection;
- (void)_performDetection;
- (void)visitState:(id)a0 didChangeStateFromType:(unsigned long long)a1 toType:(unsigned long long)a2;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)bootstrapDeviceRecord:(id)a0;
- (void)visitState:(id)a0 didIssueMetricsSubmissionHint:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)notifyObserversOfRequests:(id)a0;
- (void)_performUpdateIfNecessary:(id)a0;
- (void)bootstrapVisitState:(id)a0;
- (void)notifyObserversOfVisitStateChange;
- (id)initWithTASettings:(id)a0;
- (void)notifyObserversOfStagedSuspiciousDevices:(id)a0;
- (void)notifyObserversOfSuspiciousDevices:(id)a0;
- (void)notifyObserversOfSuspiciousDeviceUpdate:(id)a0;

@end
