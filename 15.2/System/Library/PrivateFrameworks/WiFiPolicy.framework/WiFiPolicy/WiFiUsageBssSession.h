@class NSMutableDictionary, NSString, WiFiUsageBssDetails, NSDate, NSMutableSet;

@interface WiFiUsageBssSession : NSObject {
    unsigned long long _faultReasonCount[22];
    long long _maxLinkRssi;
    long long _minLinkRssi;
    long long _avgLinkRssi;
    long long _joinRssi;
    long long _leftRssi;
}

@property (retain, nonatomic) NSMutableDictionary *sessionInfo;
@property (retain, nonatomic) NSDate *joinedTimestamp;
@property (retain, nonatomic) NSDate *lastLqmUpdateTimestamp;
@property (retain, nonatomic) NSDate *lastPoorCoverageEntryTimestamp;
@property (retain, nonatomic) NSDate *lastCellularFallbackStateChangedTime;
@property (retain, nonatomic) NSDate *lastCellularOutrankingStateChangedTime;
@property (retain, nonatomic) WiFiUsageBssDetails *originBssDetails;
@property (retain, nonatomic) WiFiUsageBssDetails *targetBssDetails;
@property (retain, nonatomic) NSString *bssEnvironment;
@property (nonatomic) BOOL cellularFallbackEnabled;
@property (nonatomic) BOOL cellularOutrankingEnabled;
@property (nonatomic) BOOL supportsNeighborReport;
@property (nonatomic) BOOL supportsFastTransition;
@property (nonatomic) BOOL supportsBssTransitionManagement;
@property (nonatomic) BOOL supportsAdaptiveFastTransition;
@property (nonatomic) BOOL supportsFastlane;
@property (nonatomic) BOOL supportsNetworkAssurance;
@property (nonatomic) BOOL supportsAdaptiveRoaming;
@property (nonatomic) long long roamConfigTriggerRssi;
@property (nonatomic) unsigned long long roamConfig24GHzChannelCount;
@property (nonatomic) unsigned long long roamConfig5GHzChannelCount;
@property (nonatomic) unsigned long long roamConfigTotalChannelCount;
@property (nonatomic) long long newRssi;
@property (nonatomic) long long lastLinkRssi;
@property (nonatomic) long long lastRoamScanRssi;
@property (nonatomic) unsigned long long currentChannel;
@property (nonatomic) unsigned long long newChannel;
@property (nonatomic) long long linkRssiGt40;
@property (nonatomic) long long linkRssi40to50;
@property (nonatomic) long long linkRssi50to60;
@property (nonatomic) long long linkRssi60to65;
@property (nonatomic) long long linkRssi65to70;
@property (nonatomic) long long linkRssi70to75;
@property (nonatomic) long long linkRssi75to80;
@property (nonatomic) long long linkRssi80to85;
@property (nonatomic) long long linkRssi85to90;
@property (nonatomic) long long linkRssiLt90;
@property (nonatomic) unsigned long long roamReasonInitialAssociationCount;
@property (nonatomic) unsigned long long roamReasonLowRssiCount;
@property (nonatomic) unsigned long long roamReasonDeauthDisassocCount;
@property (nonatomic) unsigned long long roamReasonBeaconLostCount;
@property (nonatomic) unsigned long long roamReasonSteeredByApCount;
@property (nonatomic) unsigned long long roamReasonSteeredByBtmCount;
@property (nonatomic) unsigned long long roamReasonSteeredByCsaCount;
@property (nonatomic) unsigned long long roamReasonReassocRequestedCount;
@property (nonatomic) unsigned long long roamReasonHostTriggeredCount;
@property (nonatomic) unsigned long long roamReasonBetterCandidateCount;
@property (nonatomic) unsigned long long roamReasonBetterConditionCount;
@property (nonatomic) unsigned long long roamReasonMiscCount;
@property (nonatomic) unsigned long long roamStatusSucceededCount;
@property (nonatomic) unsigned long long roamStatusFailedCount;
@property (nonatomic) unsigned long long roamStatusNoCandidateCount;
@property (nonatomic) unsigned long long roamStatusNoQualifiedCandidateCount;
@property (nonatomic) unsigned long long bssTransitionRequestCount;
@property (nonatomic) unsigned long long bssTransitionAcceptedCount;
@property (nonatomic) unsigned long long bssTransitionRejectedCount;
@property (nonatomic) unsigned long long minNeighborCount;
@property (nonatomic) unsigned long long maxNeighborCount;
@property (nonatomic) long long minNeighborRssi;
@property (nonatomic) long long maxNeighborRssi;
@property (retain, nonatomic) NSMutableSet *roam24GHzCandidates;
@property (retain, nonatomic) NSMutableSet *roam5GHzCandidates;
@property (nonatomic) unsigned long long highRssiRoamScanCount;
@property (nonatomic) unsigned long long lowRssiRoamScanCount;
@property (nonatomic) unsigned long long unexpectedBeaconLostRoamScanCount;
@property (nonatomic) double poorCoverageAndA2dpDuration;
@property (nonatomic) double poorCoverageAndScoDuration;
@property (nonatomic) double poorCoverageAndAwdlDuration;
@property (nonatomic) double poorCoverageAndScanDuration;
@property (nonatomic) double minRoamLatency;
@property (nonatomic) double maxRoamLatency;
@property (nonatomic) unsigned long long partialScanCount;
@property (nonatomic) unsigned long long fullScanCount;
@property (retain, nonatomic) NSDate *callStartedTime;
@property (retain, nonatomic) NSDate *inVehicleEntryTime;
@property (retain, nonatomic) NSDate *inMotionStartedTime;
@property (retain, nonatomic) NSDate *a2dpActiveTime;
@property (retain, nonatomic) NSDate *scoActiveTime;
@property (retain, nonatomic) NSDate *hidPresentTime;
@property (retain, nonatomic) NSDate *awdlActiveTime;
@property (retain, nonatomic) NSDate *roamingActiveTime;
@property (retain, nonatomic) NSDate *scanningActiveTime;
@property (nonatomic) double inCallDuration;
@property (nonatomic) double inVehicleDuration;
@property (nonatomic) double inMotionDuration;
@property (nonatomic) double inA2dpDuration;
@property (nonatomic) double inScoDuration;
@property (nonatomic) double inHidPresentDuration;
@property (nonatomic) double inAwdlDuration;
@property (nonatomic) double inRoamDuration;
@property (nonatomic) double inScanDuration;
@property (nonatomic) double inCellularFallbackDuration;
@property (nonatomic) double inCellularOutrankingDuration;
@property (nonatomic) double inPoorCoverageDuration;
@property (nonatomic) unsigned long long inCallEventCount;
@property (nonatomic) unsigned long long inVehicleEventCount;
@property (nonatomic) unsigned long long inMotionEventCount;
@property (nonatomic) unsigned long long inA2dpEventCount;
@property (nonatomic) unsigned long long inScoEventCount;
@property (nonatomic) unsigned long long inHidPresentCount;
@property (nonatomic) unsigned long long inAwdlEventCount;
@property (nonatomic) unsigned long long inRoamEventCount;
@property (nonatomic) unsigned long long inScanEventCount;
@property (nonatomic) unsigned long long cellularFallbackStateChangedCount;
@property (nonatomic) unsigned long long cellularOutrankingStateChangedCount;
@property (nonatomic) unsigned long long locationScanCount;
@property (nonatomic) unsigned long long indoorScanCount;
@property (nonatomic) unsigned long long triggerDisconnectAlertedCount;
@property (nonatomic) unsigned long long triggerDisconnectConfirmedCount;
@property (nonatomic) unsigned long long triggerDisconnectExecutedCount;
@property (nonatomic) BOOL isInternalInstall;

- (void)cellularOutrankingStateDidChange:(BOOL)a0;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)roamingStateDidChange:(BOOL)a0 flags:(unsigned long long)a1 scannedChannelCount:(unsigned long long)a2 reason:(unsigned long long)a3 latency:(unsigned long long)a4 andStatus:(unsigned long long)a5;
- (void)linkQualityDidChange:(id)a0;
- (void)scanningStateDidChange:(BOOL)a0 client:(unsigned long long)a1 neighborBSS:(id)a2 otherBSS:(id)a3;
- (void)triggerDisconnectAlerted:(BOOL)a0 confirmed:(BOOL)a1 executed:(BOOL)a2;
- (void)bluetoothStateDidChange:(BOOL)a0 connectedDeviceCount:(unsigned long long)a1 inA2dp:(BOOL)a2 inSco:(BOOL)a3;
- (void)sentBssTransitionResponseWithStatus:(long long)a0 terminationDelayRequested:(BOOL)a1;
- (void)motionStateDidChange:(BOOL)a0 andVehicularState:(BOOL)a1;
- (void)callStateDidChange:(BOOL)a0;
- (void)receivedBssTransitionRequestWithCandidateListIncluded:(BOOL)a0 isAbridged:(BOOL)a1 disassociationImminent:(BOOL)a2 bssTerminationIncluded:(BOOL)a3 essDisassociationImminent:(BOOL)a4;
- (void)roamingConfigurationDidChange:(long long)a0 withChannelList:(id)a1;
- (void)roamCacheDidUpdate:(id)a0;
- (void)awdlStateDidChange:(BOOL)a0 inMode:(long long)a1;
- (void)cellularFallbackStateDidChange:(BOOL)a0;
- (void)updateActivityDurations:(id)a0;
- (id)initWithInterfaceName:(id)a0 bssEnvironment:(id)a1 andBssDetails:(id)a2;
- (BOOL)submitAnalytics;
- (void)updateRssi:(long long)a0 timeSinceLastUpdate:(double)a1;
- (void)setJoinRssi:(long long)a0;
- (void).cxx_destruct;
- (void)bssDidChange:(id)a0 withDetails:(id)a1;
- (void)reset;

@end
