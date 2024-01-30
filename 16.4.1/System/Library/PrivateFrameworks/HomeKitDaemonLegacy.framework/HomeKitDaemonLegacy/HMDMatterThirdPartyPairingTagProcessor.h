@class HMDMatterThirdPartyPairingLogEvent, HMMStateTracker;

@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor

@property (readonly, nonatomic) HMDMatterThirdPartyPairingLogEvent *logEvent;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) HMMStateTracker *stateTracker;

- (void).cxx_destruct;
- (id)initWithSubmitter:(id)a0;
- (void)setLogEventCloseReason:(unsigned long long)a0;
- (id)tagProcessingBlocks;
- (void)closeSessionWithEvent:(id)a0;
- (void)processAccessoryInfoEvent:(id)a0;
- (void)processCASESanityCheckEvent:(id)a0;
- (void)processCredentialsToClientEvent:(id)a0;
- (void)processFirmwareVersionEvent:(id)a0;
- (void)processLongestPairingState:(id)a0;
- (void)processPairingErrorEvent:(id)a0;
- (void)processPairingStartEvent:(id)a0;
- (void)processPairingSuccessEvent:(id)a0;
- (void)processPairingTransport:(id)a0;
- (void)processStateChange:(id)a0;
- (void)processThreadScanResultsEvent:(id)a0;
- (void)processWiFiScanResultsEvent:(id)a0;

@end
