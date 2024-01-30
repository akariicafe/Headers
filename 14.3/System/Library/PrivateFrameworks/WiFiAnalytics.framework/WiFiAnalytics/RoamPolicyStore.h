@class AnalyticsStoreMOHandler;

@interface RoamPolicyStore : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *roamPolicyMOHandler;
@property BOOL enabled;

- (id)deriveRoamInfo:(id)a0 ssid:(id)a1 numRoamSamplesCollectedSoFar:(unsigned long long)a2;
- (void)checkForFrequentRoams:(unsigned long long)a0 date:(id)a1 motionState:(long long)a2;
- (BOOL)isHomeEnvironment:(id)a0;
- (void).cxx_destruct;
- (BOOL)buildRoamPoliciesForNetwork:(id)a0 bssid:(id)a1;
- (BOOL)checkForNewBSSAddition:(id)a0 bssid:(id)a1;
- (void)storeNeighborsInfoLearningsFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)listOutLazyRoamScanInfo:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)a0;
- (BOOL)isNetworkQualifiedForAdaptiveRoaming:(id)a0;
- (void)listOutReassocRoams:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (void)resetAdaptiveRoamingStateMachine:(id)a0 bssid:(id)a1;
- (void)updateCoreDataWithNewChannelInfo:(long long)a0 bssid:(id)a1 ssid:(id)a2;
- (void)listOutLinkLossSuppressionRoams:(unsigned long long)a0;
- (void)locateTheNeighbor:(unsigned long long)a0 cacheRssi:(long long)a1;
- (void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)listOutTimeSpentOnBss:(unsigned long long)a0 timeSpentOnBss:(unsigned long long)a1 motionState:(long long)a2;
- (BOOL)monitorDeploymentChanges:(id)a0 ssid:(id)a1 roamStatus:(unsigned long long)a2 originBssid:(id)a3 targetBssid:(id)a4;
- (void)listOutBTMRoams:(unsigned long long)a0;
- (BOOL)isWorkEnvironment:(id)a0;
- (void)deriveBadRoams:(id)a0;
- (BOOL)inRange:(long long)a0 high:(long long)a1 value:(long long)a2;
- (void)deriveRoamTriggerInfoFromRoamObjects:(id)a0 numRoamSamplesCollectedSoFar:(unsigned long long)a1 bssid:(id)a2 ssid:(id)a3;
- (BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)a0;
- (void)setDeploymentFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)predictPath:(id)a0;
- (BOOL)buildRoamCacheInfoForNetwork:(id)a0 bssid:(id)a1;
- (void)findDeploymentType:(unsigned long long)a0;
- (void)deriveNeighborChannelsFromRoamTargetsChannels:(id)a0 bssid:(id)a1 ssid:(id)a2;
- (void)listOutMostUsedRoamReasons:(unsigned long long)a0 roamReason:(unsigned long long)a1;
- (void)setDeploymentFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (id)collectRoamCandidates:(id)a0 roamSamplesToCollect:(unsigned long long)a1;
- (BOOL)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)a0;
- (id)initWithAnalyticsStore:(id)a0;
- (void)listOutMostUsedSourceRssi:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;

@end
