@class NSMutableArray, NSMutableDictionary, BRSetupControllerTracker, NSString, NSURL, NSObject, BRRTCPairingMetric;
@protocol OS_dispatch_queue;

@interface BRRTCPairingReportManager : NSObject

@property (retain, nonatomic) BRRTCPairingMetric *pairingMetric;
@property (retain, nonatomic) NSMutableDictionary *openPairingTimeEvents;
@property (retain, nonatomic) BRSetupControllerTracker *setupControllerTracker;
@property (weak, nonatomic) NSString *currentPairingMetricID;
@property (retain, nonatomic) NSURL *currentPairingMetricBridgePlistPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ archivePairingMetric;
@property (nonatomic) BOOL pairingMetricSetup;
@property (retain, nonatomic) NSMutableArray *pendingEvents;
@property (nonatomic) BOOL metricBusy;
@property (copy, nonatomic) id /* block */ pendingMetricSubmission;

- (void).cxx_destruct;
- (void)completeRTCPairingMetricForMetricID:(id)a0 withSuccess:(id /* block */)a1;
- (void)addPairingTimeEventToPairingReportPlist:(unsigned long long)a0 withValue:(id)a1 withError:(id)a2;
- (void)checkInWithOpenPairingTimeEvent:(unsigned long long)a0;
- (void)_writeToPairingPlist:(id)a0 withValue:(id)a1;
- (id)_trimPrecision:(id)a0;
- (void)completeMetricForAppTermination;
- (void)_addEvent:(unsigned long long)a0 withValue:(id)a1 withError:(id)a2;
- (void)_addEventToPendingQueue:(unsigned long long)a0 withValue:(id)a1;
- (void)_cleanupAfterWrite;
- (BOOL)_eventClearedForRecord:(unsigned long long)a0;
- (void)addMetaKeys;
- (void)addPairingTimeEventStringToPairingReportPlist:(unsigned long long)a0 withValue:(id)a1 withError:(id)a2;
- (void)addPendingEventToMetric;
- (void)archivePairingMetric:(id)a0 withCompletion:(id /* block */)a1;
- (void)checkInWithClosingPairingTimeEvent:(unsigned long long)a0;
- (void)checkInWithController:(id)a0 action:(unsigned long long)a1;
- (void)checkInWithRUIController:(id)a0;
- (void)cleanUpMetricDirectoryWithCompletion:(id /* block */)a0;
- (void)clearPendingEventQueue;
- (id)combineMetricPlistsForArchive:(id)a0;
- (void)completePairingMetricWithSuccess:(BOOL)a0;
- (void)createPairingReportPlistWithPairingType:(unsigned long long)a0;
- (id)deltaForControllerAction:(id)a0;
- (void)flagForAutomation;
- (id)initWithPairingBeginsType:(unsigned long long)a0;
- (void)initializeEndToEndMetric;
- (void)recordSetupController:(id)a0 action:(unsigned long long)a1;
- (void)setupPairingMetric:(unsigned long long)a0;
- (void)submitAnyPendingMetrics;
- (id)truncateSetupControllerClassName:(id)a0;
- (void)writeDeltasForSetupControllerActions:(id)a0 action:(unsigned long long)a1;
- (void)writePushOrHoldToPairingPlist:(id)a0 action:(unsigned long long)a1;

@end
