@class NSSet, NSMutableDictionary, AWDSymptomsCellularSDMAdviceChange, WiFiViabilityMonitor, NSObject, FlowOracle, FlowScrutinizer, NSMutableSet;
@protocol OS_dispatch_queue, CellThroughputAdviserDelegate;

@interface CellThroughputAdviser : NSObject {
    BOOL _pollInProgress;
    unsigned int _reportedAdvice;
    unsigned long long _reportedCause;
    unsigned long long _initiallyReportedCause;
    unsigned int _wifiViability;
    int _traceFD;
    BOOL _traceVerbose;
    BOOL _avUseCasesSupported;
    double _lastStateUpdate;
    double _lastActivityStatsUpdate;
    double _sampleStartTime;
    double _lastHighInterfaceUse;
    double _lastTransferSizeUsageTimestamp;
    double _lastAssetDownloadUsageTimestamp;
    double _lastHighInterfaceUseDampeningInterval;
    double _lastHighTransferSizeDampeningInterval;
    double _lastPromotedTransferSizeDampeningInterval;
    double _totalActiveTime;
    double _totalDisabledTime;
    double _totalQuiesceTime;
    double _totalInferredSleepTime;
    double _inactivityTimeoutForQuiesce;
    unsigned long long _numPolls;
    double _lastPollTime;
    double _pollIntervalHistogramResetTime;
    unsigned int _pollIntervalHistogram[36];
    double _minTransferSizeThroughputForUpgrade;
    double _minDisplayOnTransferSizeThroughputForUpgrade;
    double _minTransferSizeThroughputForContinuedUpgradeSub6;
    double _minTransferSizeThroughputForContinuedUpgradeMmWave;
    double _minTransferSizeThroughputForContinuedUpgradeRequest;
    double _minAssetDownloadThroughputForUpgrade;
    double _minAssetDownloadThroughputForContinuedUpgradeRequest;
    double _minAssetDownloadThroughputForContinuedUpgradeSub6;
    double _minAssetDownloadThroughputForContinuedUpgradeMmWave;
    double _maxAssetDownloadDurationBelowThreshold;
    unsigned int _numLowerTransferThresholdFlowsForUpperThreshold;
    unsigned int _numDisplayOnLowerTransferThresholdFlowsForUpperThreshold;
    unsigned int _adviceForSustainedHighInterfaceThroughput;
    unsigned int _adviceForModestAVFlows;
    unsigned int _adviceForModestAVFlowsLowerCertainty;
    unsigned int _adviceForBusyAVFlows;
    unsigned int _adviceForBusyAVFlowsLowerCertainty;
    unsigned int _stateLogLevel;
    unsigned int _stateLogLevelForVerbose;
    unsigned int _dispatchAfterSeqno;
    unsigned int _powerLogSeqno;
    unsigned int _AWDMetricSeqno;
    double _AWDTimeOfLastReport;
    BOOL _quiesced;
    WiFiViabilityMonitor *_wifiViabilityMonitor;
    NSMutableDictionary *_pendingDispatchAfterBlocks;
    NSMutableDictionary *_pendingPowerLogReport;
    AWDSymptomsCellularSDMAdviceChange *_pendingAWDAdviceChangeReport;
    NSSet *_previousSampleContributors;
    NSSet *_prevAWDInitiators;
    BOOL _previousIsScreenDark;
    BOOL _previousIsScreenLocked;
    NSMutableSet *_pendingDelayDetails;
}

@property (retain, nonatomic) FlowOracle *flowOracle;
@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isScreenDark;
@property (nonatomic) BOOL isScreenLocked;
@property (nonatomic) char nrFrequencyBand;
@property (nonatomic) unsigned int adminAdviceOverride;
@property (nonatomic) unsigned int targetAdviceLevel;
@property (nonatomic) double propertyChangeTimestamp;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CellThroughputAdviserDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (void)quiesce;
- (void)setPollingRate:(double)a0;
- (void)postAWDMetric:(id)a0 withIdentifier:(unsigned int)a1;
- (void)reportPeriodicAWDStatistics;
- (void)willPollFlows;
- (void)didPollFlowsAt:(double)a0;
- (void)noteFlowSnapshot:(id)a0 withClassification:(id)a1;
- (void)timerCallbackWithContext:(id)a0 at:(double)a1;
- (id)getStateAt:(double)a0;
- (void)noteCoreMediaAssetDownloadEvent:(unsigned long long)a0 downloadUUID:(id)a1 onBehalfOf:(id)a2 duration:(double)a3 at:(double)a4;
- (void)noteExpectedTransfer:(unsigned long long)a0 dueTo:(int)a1 flowUUID:(id)a2 at:(double)a3;
- (void)dumpStateAt:(double)a0 verbose:(BOOL)a1;
- (void)restoreDefaults;
- (id)encodingToNSUUID:(id)a0;
- (BOOL)encodingRepresentsUint64:(id)a0;
- (BOOL)encodingRepresentsInt:(id)a0;
- (BOOL)encodingRepresentsNSString:(id)a0;
- (id)jsonForAWDReport:(id)a0;
- (id)jsonForTimeInterval:(double)a0 indent:(int)a1;
- (id)_getCombinedStateAt:(double)a0;
- (BOOL)encodingRepresentsNSTimeInterval:(id)a0;
- (void)_traceDelegateCall:(char *)a0 param1Interval:(double)a1 param2:(unsigned long long)a2;
- (void)_initiatorArray:(id)a0 addOriginNameWithForegroundPrefix:(id)a1;
- (void)_traceDelegateCall:(char *)a0 param1Id:(id)a1 at:(double)a2;
- (id)_causeInitiators:(unsigned long long)a0;
- (id)_initiatorNameSetFromCauseArray:(id)a0;
- (void)_AWDCollectLatestLinkThroughput:(id)a0;
- (void)_dispatchAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)_startPowerLogCollectionFor:(unsigned int)a0;
- (void)_finishPowerLogCollection;
- (BOOL)_powerLogActionForNewAdvice:(unsigned int)a0 cause:(unsigned long long)a1 at:(double)a2;
- (BOOL)_AWDActionForNewAdvice:(unsigned int)a0 cause:(unsigned long long)a1 at:(double)a2;
- (id)currentAWDSymptomsCellularSDMPollingStatistics;
- (id)currentAWDSymptomsCellularSDMTimeStatistics;
- (double)_minRequiredCoreMediaAssetDownloadThroughputForCurrentRadioState;
- (unsigned long long)_coreMediaAssetDownloadActiveCauseForCurrentRadioState;
- (unsigned long long)_coreMediaAssetDownloadHysteresisCauseForCurrentRadioState;
- (double)_minRequiredLargeTransferThroughputForCurrentRadioState;
- (unsigned long long)_largeTransferContinuesCauseForCurrentRadioState;
- (unsigned long long)_largeTransferHysteresisCauseForCurrentRadioState;
- (unsigned long long)_largeTransferFinalHysteresisCauseForCurrentRadioState;
- (BOOL)checkCoreMediaAssetDownloadCauses:(unsigned long long *)a0;
- (BOOL)checkLibnetcoreLargeTransferCauses:(unsigned long long *)a0;
- (void)_traceDelegateCall:(char *)a0 param1Interval:(double)a1 at:(double)a2;
- (void)performActivityStatsTimekeeping;
- (unsigned int)determineAdvice:(unsigned long long *)a0;
- (void)noteAdviceForMetrics:(unsigned int)a0 cause:(unsigned long long)a1;
- (void)_traceDelegateCall:(char *)a0 param1:(unsigned int)a1 at:(double)a2;
- (void)_traceSetter:(char *)a0 intval:(int)a1;
- (void)_refreshAdvice:(int)a0;
- (void)unquiesce;
- (void)_traceSetter:(char *)a0 stringVal:(id)a1;
- (void)_traceCall:(char *)a0;
- (void)_traceCall:(char *)a0 param1:(id)a1;
- (void)notePollIntervalForMetrics:(double)a0;
- (void)_assessActivityStateForQuiesce;
- (void)_traceStateAt:(double)a0;
- (id)jsonForSnapshot:(id)a0;
- (id)jsonForClassification:(id)a0;
- (void)_traceCall:(char *)a0 param1:(id)a1 param2:(id)a2;
- (id)jsonForUint64:(unsigned long long)a0;
- (id)jsonForUUID:(id)a0;
- (id)jsonForNSString:(id)a0;
- (void)_traceCall:(char *)a0 param1:(id)a1 param2:(id)a2 param3:(id)a3 param4:(id)a4 param5:(id)a5;
- (id)jsonForInt:(int)a0;
- (void)_traceCall:(char *)a0 param1:(id)a1 param2:(id)a2 param3:(id)a3 param4:(id)a4;
- (id)_getState:(BOOL)a0;
- (void)_dumpArray:(id)a0;
- (double)encodingToNSTimeInterval:(id)a0;
- (void)_checkPendingTimers:(double)a0;
- (BOOL)encodingRepresentsNSUUID:(id)a0;
- (unsigned long long)encodingToUint64:(id)a0;
- (int)encodingToInt:(id)a0;
- (id)encodingToNSString:(id)a0;
- (void)_traceCall:(char *)a0 param1:(id)a1 param2:(id)a2 param3:(id)a3;
- (long long)configItemToLongLong:(id)a0;
- (void)setTimerCallbackWithSimulatedDelay:(double)a0 context:(id)a1;
- (void)performAction:(id)a0 verbose:(BOOL)a1;

@end
