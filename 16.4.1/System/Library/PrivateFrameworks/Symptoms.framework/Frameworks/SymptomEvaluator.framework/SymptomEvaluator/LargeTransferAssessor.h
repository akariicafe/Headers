@class NSMutableDictionary, ConfigurationParams, NSMutableSet, FlowScrutinizer;

@interface LargeTransferAssessor : NSObject {
    unsigned long long numLowerThresholdRxTransferSizes;
    unsigned long long numUpperThresholdRxTransferSizes;
    unsigned long long numActiveTransferSizes;
    unsigned long long numCloakedTransferSizes;
    double _lastTransferSizeUse;
    double _lastTransferSizeCheck;
    double _prolongedBelowThresholdDampeningInterval;
    double _normalCloseDampeningInterval;
    double _transferSizeFlowFailedThresholdQuarantineTime;
    ConfigurationParams *_pendingConfigurationParams;
    NSMutableDictionary *_appTransferSummaries;
    FlowScrutinizer *_flowScrutinizer;
}

@property (nonatomic) int state;
@property (nonatomic) unsigned long long numCellRxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellTxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellRxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long numCellTxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiRxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiTxLowerThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiRxUpperThresholdTransferSizes;
@property (nonatomic) unsigned long long numWiFiTxUpperThresholdTransferSizes;
@property (copy, nonatomic) id /* block */ shouldGoActiveBlock;
@property (copy, nonatomic) id /* block */ shouldStayActiveBlock;
@property (readonly, nonatomic) BOOL assessedPositive;
@property (readonly, nonatomic) int activeTransitionQualifier;
@property (readonly, nonatomic) NSMutableSet *currentActiveTransferApps;
@property (readonly, nonatomic) double transferSizeRelatedRecentCellRxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentCellTxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentWiFiRxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentWiFiTxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentTotalRxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentTotalTxThroughput;
@property (readonly, nonatomic) double accumulatedLowThroughputHysteresisTime;
@property (readonly, nonatomic) int numTransitionsLowThroughputHysteresisToActive;

- (void)restoreDefaults;
- (id)stateString;
- (id)getState;
- (void)checkLargeTransfersAt:(double)a0;
- (void)dumpStateAt:(double)a0;
- (id)init;
- (id)description;
- (BOOL)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)markActiveTransferSizeFlowsAs:(unsigned int)a0;
- (void)refreshTransferSizeState;
- (double)transferSizeRelatedRecentCellThroughput;
- (double)transferSizeRelatedRecentTotalThroughput;
- (double)transferSizeRelatedRecentWiFiThroughput;

@end
