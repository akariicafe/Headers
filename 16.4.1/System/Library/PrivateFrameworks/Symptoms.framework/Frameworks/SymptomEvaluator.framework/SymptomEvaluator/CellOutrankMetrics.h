@class CellOutrankController, WiFiThroughputAdviser, NSMutableArray, CellularStateRelay, NetworkAnalyticsStateRelay, NSObject;
@protocol OS_dispatch_queue;

@interface CellOutrankMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CellularStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellOutrankController *_cellOutrankController;
    WiFiThroughputAdviser *_wifiThroughputAdviser;
    NSMutableArray *_stateHistory;
    long long _outrankPollingMode;
    double _outrankEntryTimestamp;
    double _sampledTallyTimestamp;
    unsigned long long _sampledCellGrandTally;
    unsigned long long _sampledWifiGrandTally;
    int _stateHistorySeqno;
    double _delayedMeasurementInterval;
    unsigned int _maxStateHistory;
    double _prevCellOutrankPossibleDuration;
    double _prevCellOutrankIconSetDuration;
    double _prevCellOutrankFGExploitDuration;
    double _prevCellOutrankFGNonExploitDuration;
    unsigned int _prevCellOutrankIconSetEvents;
}

- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (void)didSampleFlows;
- (void)reportABCCase:(id)a0;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_captureOutrankEntryAdditionalState:(id)a0 flags:(unsigned long long)a1;
- (void)_logMetricDictionaryForNew:(id)a0 old:(id)a1 withDelayedItems:(BOOL)a2 why:(id)a3;
- (id)_outrankMetricForNew:(id)a0 old:(id)a1 withDelayedItems:(BOOL)a2;
- (void)_sendOutrankMetricNew:(id)a0 old:(id)a1 withDelayedItems:(BOOL)a2;
- (void)_updateStateDeltas:(id)a0 duration:(double)a1;
- (void)noteSTMState:(unsigned int)a0 flags:(unsigned long long)a1 wrmStatus:(unsigned long long)a2;
- (id)secondsToMetricsAccuracy:(double)a0;
- (void)updateOutrankExitMetrics:(id)a0;

@end
