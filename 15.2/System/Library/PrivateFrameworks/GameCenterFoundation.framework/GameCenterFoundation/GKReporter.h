@interface GKReporter : NSObject

@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;
@property (nonatomic) double currentRealtimeMatchPersistenceTimestamp;

+ (id)reporter;

- (void)reportAppLaunchDuration;
- (void)reportAuthenticateResponseDuration;
- (void)recordInviteeUILaunchTimestamp;
- (void)reportCurrentRealtimeMatchPersistenceDuration;
- (void)reportPlayerAuthenticationFailure:(id)a0;
- (void)recordConnectingDevicesTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 adamID:(id)a2;
- (void)reportTotalInviteReceivedDuration;
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;
- (void)recordProgramaticInviteTimestamp;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)reportMessageInviteProcessingDuration;
- (void)reportOnboardingEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportInviteeUILaunchDuration;
- (void)reportEvent:(id)a0 type:(id)a1 inboxFriendRequestCount:(long long)a2;
- (void)reportEvent:(id)a0 reportable:(id)a1;
- (void)reportEvent:(id)a0 type:(id)a1 count:(long long)a2;
- (void)reportProgramaticInviteDuration;
- (void)reportDurationForEvent:(id)a0 eventType:(id)a1 withStartTimestamp:(double)a2;
- (BOOL)isTimeSpanValid:(double)a0 maxDuration:(double)a1;
- (void)reportScreenTimeEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportEvent:(id)a0 type:(id)a1 scoreRank:(id)a2;
- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)recordAuthenticateResponseTimestamp;
- (void)reportConnectingDevicesDuration;
- (void)reportEvent:(id)a0 target:(id)a1 keyPath:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 bundleID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 friendsPlayedThisGame:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 payload:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2;
- (void)reportTournamentAnalyticsWithDomain:(id)a0 type:(id)a1 tournamentType:(id)a2 replayCount:(id)a3 friendCount:(id)a4 tournamentID:(id)a5 bundleID:(id)a6 inviteeCount:(id)a7;

@end
