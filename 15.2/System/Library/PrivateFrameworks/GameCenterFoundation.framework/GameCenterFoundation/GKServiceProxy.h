@class NSDictionary, GKDaemonProxy, GKPlayerInternal, GKThreadsafeDictionary;
@protocol GKBulletinService, GKMultiplayerServicePrivate, GKChallengeServicePrivate, GKAccountService, GKFriendServicePrivate, GKAnalyticsServicePrivate, GKTurnBasedServicePrivate, GKGameService, GKGameSessionService, GKTournamentService, GKTournamentServicePrivate, GKMultiplayerService, GKGameStatServicePrivate, GKChallengeService, GKGameStatService, GKFriendService, GKUtilityServicePrivate, GKGameServicePrivate, GKProfileServicePrivate, GKGameSessionServicePrivate, GKTurnBasedService, GKUtilityService, GKBulletinServicePrivate, GKAnalyticsService, GKProfileService, GKAccountServicePrivate;

@interface GKServiceProxy : NSObject

@property (retain) NSDictionary *serviceLookup;
@property (retain) GKThreadsafeDictionary *pendingRequests;
@property unsigned int serviceGeneration;
@property (retain) GKDaemonProxy *baseProxy;
@property (weak) GKPlayerInternal *localPlayer;
@property (readonly) id<GKAccountService> accountService;
@property (readonly) id<GKAccountServicePrivate> accountServicePrivate;
@property (readonly) id<GKProfileService> profileService;
@property (readonly) id<GKProfileServicePrivate> profileServicePrivate;
@property (readonly) id<GKFriendService> friendService;
@property (readonly) id<GKFriendServicePrivate> friendServicePrivate;
@property (readonly) id<GKGameService> gameService;
@property (readonly) id<GKGameServicePrivate> gameServicePrivate;
@property (readonly) id<GKGameStatService> gameStatService;
@property (readonly) id<GKGameStatServicePrivate> gameStatServicePrivate;
@property (readonly) id<GKChallengeService> challengeService;
@property (readonly) id<GKChallengeServicePrivate> challengeServicePrivate;
@property (readonly) id<GKMultiplayerService> multiplayerService;
@property (readonly) id<GKMultiplayerServicePrivate> multiplayerServicePrivate;
@property (readonly) id<GKTurnBasedService> turnBasedService;
@property (readonly) id<GKTurnBasedServicePrivate> turnBasedServicePrivate;
@property (readonly) id<GKUtilityService> utilityService;
@property (readonly) id<GKUtilityServicePrivate> utilityServicePrivate;
@property (readonly) id<GKBulletinService> bulletinService;
@property (readonly) id<GKBulletinServicePrivate> bulletinServicePrivate;
@property (readonly) id<GKAnalyticsService> analyticsService;
@property (readonly) id<GKAnalyticsServicePrivate> analyticsServicePrivate;
@property (readonly) id<GKGameSessionService> gameSessionService;
@property (readonly) id<GKGameSessionServicePrivate> gameSessionServicePrivate;
@property (readonly) id<GKTournamentService> tournamentService;
@property (readonly) id<GKTournamentServicePrivate> tournamentServicePrivate;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)methodSignatureForProtocol:(id)a0 selector:(SEL)a1;
- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)replyToDuplicatesForRequest:(id)a0 withInvocation:(id)a1 queue:(id)a2;
- (id)requestIdentifierForInvocation:(id)a0;
- (void)buildServiceLookupIfNeccessary;
- (void)buildServiceLookup;
- (void)addService:(id)a0 forProtocol:(id)a1 toLookup:(id)a2;

@end
