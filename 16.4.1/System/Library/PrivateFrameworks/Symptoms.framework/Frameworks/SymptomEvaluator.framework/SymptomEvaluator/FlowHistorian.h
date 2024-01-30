@class NSString, NSMutableArray;

@interface FlowHistorian : NSObject {
    struct { struct { unsigned long long rxBytes; unsigned long long txBytes; unsigned long long openedFlows; unsigned long long closedFlows; } counts[8]; } _lastSampledCounts;
    struct { struct { unsigned long long rxBytes; unsigned long long txBytes; unsigned long long openedFlows; unsigned long long closedFlows; } counts[8]; } _currentCounts;
    double _lastInterfaceTrafficTimestamp;
    double _lastSampleTimeIntervalSinceReferenceDate;
}

@property (retain, nonatomic) NSMutableArray *historySamples;
@property (readonly, nonatomic) double lastTrafficTimestamp;
@property (readonly, nonatomic) unsigned long long totalRxBytes;
@property (readonly, nonatomic) unsigned long long totalRxAppleStackBytes;
@property (readonly, nonatomic) unsigned long long totalRxNonAppleStackBytes;
@property (readonly, nonatomic) unsigned long long totalRxRNFBytes;
@property (readonly, nonatomic) unsigned long long totalRxSISBytes;
@property (readonly, nonatomic) unsigned long long totalTxBytes;
@property (readonly, nonatomic) unsigned long long totalTxAppleStackBytes;
@property (readonly, nonatomic) unsigned long long totalTxNonAppleStackBytes;
@property (readonly, nonatomic) unsigned long long totalTxRNFBytes;
@property (readonly, nonatomic) unsigned long long totalTxSISBytes;
@property (readonly, nonatomic) unsigned long long totalClosedFlows;
@property (readonly, nonatomic) unsigned long long totalClosedAppleStackFlows;
@property (readonly, nonatomic) unsigned long long totalClosedNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long totalClosedSISFlows;
@property (readonly, nonatomic) unsigned long long totalClosedRNFFlows;
@property (readonly, nonatomic) unsigned long long currentOpenedFlows;
@property (readonly, nonatomic) unsigned long long currentOpenedAppleStackFlows;
@property (readonly, nonatomic) unsigned long long currentOpenedNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long currentOpenedSISFlows;
@property (readonly, nonatomic) BOOL pendingHistorySampleIsIdle;
@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) unsigned int maxHistorySamples;
@property (readonly, nonatomic) unsigned long long totalOpenedFlows;
@property (readonly, nonatomic) unsigned long long totalOpenedAppleStackFlows;
@property (readonly, nonatomic) unsigned long long totalOpenedNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long totalOpenedSISFlows;
@property (readonly, nonatomic) unsigned long long totalOpenedRNFFlows;

- (id)getState:(BOOL)a0;
- (BOOL)pendingInterfaceSampleIsIdle;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (double)lastInterfaceTrafficTimestamp;
- (void)applyDeltaRx:(unsigned long long)a0 deltaTx:(unsigned long long)a1 snapshot:(id)a2;
- (unsigned long long)lastSampledRxBytes;
- (unsigned long long)lastSampledTxBytes;
- (void)updateSamplesWithTime:(double)a0 bumpSamples:(BOOL)a1;

@end
