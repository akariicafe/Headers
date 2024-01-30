@interface GKReporter : NSObject

@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;

+ (id)reporter;

- (void)reportScreenTimeEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportEvent:(id)a0 type:(id)a1 friendsPlayedThisGame:(id)a2;
- (void)reportInviteeUILaunchDuration;
- (void)reportAuthenticateResponseDuration;
- (void)reportAppLaunchDuration;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportConnectingDevicesDuration;
- (void)reportEvent:(id)a0 type:(id)a1 bundleID:(id)a2;
- (void)reportMessageInviteProcessingDuration;
- (BOOL)isTimeSpanValid:(double)a0 maxDuration:(double)a1;
- (void)reportDurationForEventType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportTotalInviteReceivedDuration;
- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)reportOnboardingEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)recordInviteeUILaunchTimestamp;
- (void)reportProgramaticInviteDuration;
- (void)recordAuthenticateResponseTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 count:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 scoreRank:(id)a2;
- (void)reportTournamentAnalyticsWithDomain:(id)a0 type:(id)a1 tournamentType:(id)a2 replayCount:(id)a3 friendCount:(id)a4 tournamentID:(id)a5 bundleID:(id)a6 inviteeCount:(id)a7;
- (void)reportEvent:(id)a0 type:(id)a1 payload:(id)a2;
- (void)recordConnectingDevicesTimestamp;
- (void)recordProgramaticInviteTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1;

@end
