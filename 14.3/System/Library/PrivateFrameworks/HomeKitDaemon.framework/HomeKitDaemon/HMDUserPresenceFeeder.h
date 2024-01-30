@class HMDUserPresenceFeedSession, NSString, HMDUserPresenceFeed, HMDBackgroundTaskAgentTimer;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging>

@property (nonatomic) unsigned long long presenceRegionStatus;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer;
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession;
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)submitPresenceReportMetricWithPresenceAuth:(id)a0 presenceCompute:(id)a1 reason:(id)a2 error:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)timerFired:(id)a0;
- (void)_registerForMessages;
- (void)_startRefreshTimer;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyDidEnterHomeRegion;
- (void)residentChanged;
- (void)notifyDidArriveHome;
- (void)notifyDidLeaveHome;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)a0 presenceAuthStatus:(id)a1;
- (void)registerQueriableAwdMetrics;
- (void)handleHomeDataLoadedNotification:(id)a0;
- (void)fmfStatusUpdateNotification:(id)a0;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (void)accountAvailabilityChanged:(id)a0;
- (void)_sendPresenceReport:(unsigned long long)a0;
- (void)_submitPresenceAuthMetric:(id)a0;
- (void)_submitPresenceComputeMetric:(id)a0;
- (void)_sendPresenceUpdateToResident:(id)a0;
- (void)_sendPresenceUpdateToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3;
- (void)_sendPresenceUpdateToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3 fmfStatus:(id)a4;
- (BOOL)_updatePresenceToResidentForUser:(id)a0 presenceAuthStatus:(id)a1 authChanging:(BOOL)a2 reason:(id)a3 fmfStatus:(id)a4;
- (void)_upgradePresenceAuth;
- (id)_sendPresenceAuthStatusForUser:(id)a0 presenceAuthStatus:(id)a1 presenceRegionStatus:(id)a2 presenceComputeStatus:(id)a3 reason:(id)a4;
- (void)_updatePresenceComputeStatus:(id)a0;
- (void)didEndFeedSession:(id)a0;
- (void)homeDataProcessed;

@end
