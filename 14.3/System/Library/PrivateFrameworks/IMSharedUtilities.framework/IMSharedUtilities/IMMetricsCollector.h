@class SDRDiagnosticReporter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) NSMutableDictionary *onGoingEventsMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (void)_trackEvent:(id)a0;
- (void)_trackEvent:(id)a0 withStatistic:(id)a1;
- (id)_trimedEventID:(id)a0;
- (void)autoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)_trackEvent:(id)a0 withCount:(id)a1;
- (void)_trackEvent:(id)a0 withDictionary:(id)a1;
- (void)_timeoutTimerFired:(id)a0;
- (void)_finalizeEvent:(id)a0 addingDicitonary:(id)a1;
- (void)_resetTimerEventIfNeedForEventID:(id)a0;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (id)init;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (BOOL)trackEvent:(id)a0 withStatistic:(id)a1;
- (BOOL)trackEvent:(id)a0 withCount:(id)a1;
- (BOOL)startEvent:(id)a0 initialDictionary:(id)a1;
- (BOOL)updateEvent:(id)a0 addToCount:(id)a1 forKey:(id)a2;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)metricAttachmentValidation:(BOOL)a0 attachmentSize:(id)a1 operationalErrorDomain:(id)a2 operationalErrorCode:(id)a3 validationErrorDomain:(id)a4 validationErrorCode:(id)a5;
- (void)dealloc;
- (BOOL)trackEvent:(id)a0 withDictionary:(id)a1;
- (BOOL)trackEvent:(id)a0;
- (BOOL)updateEvent:(id)a0 updateValue:(id)a1 forKey:(id)a2;
- (void)clearInitialCKSyncState;
- (BOOL)startEvent:(id)a0 initialDictionary:(id)a1 timeout:(unsigned long long)a2 autoBugCapture:(BOOL)a3;
- (BOOL)finalizeEvent:(id)a0 addingDicitonary:(id)a1;
- (void)noteSyncError:(id)a0;
- (void)noteCompletedInitialSync;
- (void)noteMeticsForSyncStartFrom:(id)a0 fullSync:(BOOL)a1;
- (void)noteMeticsForSyncEndedWithSuccces:(BOOL)a0 duration:(id)a1;

@end
