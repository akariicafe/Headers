@class NSMutableDictionary, NSTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface DARefreshManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *enabledTopicWrappersByEnv;
@property (retain, nonatomic) NSMutableDictionary *suspendedTopicWrappersByEnv;
@property (retain, nonatomic) NSMutableSet *wrappers;
@property (retain, nonatomic) NSMutableSet *wrappersForDailyRefresh;
@property (nonatomic) BOOL dailyRefreshInitialized;
@property (retain, nonatomic) NSMutableDictionary *apsConnections;
@property (retain, nonatomic) NSTimer *tokenRegistrationTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pcQueue;
@property (nonatomic) BOOL persistAPSAfterShutdown;

+ (id)sharedManager;

- (id)stateString;
- (void)_suspendTopicsForDelegate:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (id)init;
- (id)_portNameForEnvironmentName:(id)a0;
- (void)registerTopic:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (int)_currentTruePCStyleForDelegate:(id)a0;
- (void)delegateDidCompleteRefresh:(id)a0;
- (void)_registerAPSTopics;
- (id)_refreshWrapperForDelegate:(id)a0;
- (void)dealloc;
- (void)unregisterTopic:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)_registerAPSTopicsForDelegates:(id)a0 withConnection:(id)a1;
- (id)_connectionForEnv:(id)a0;
- (void)startDailyRefreshActivityForWrapper:(id)a0;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)establishAllApsConnections;
- (void)retryRefreshForDelegate:(id)a0 withCollections:(id)a1 after:(double)a2 originalRefreshReason:(int)a3;
- (void)registerDelegate:(id)a0;
- (id)_apsEnvStringForDAEnvString:(id)a0;
- (void)_performBlockOnRefreshManagerThread:(id /* block */)a0;
- (id)pushTokenForEnvironment:(id)a0;
- (void)_resumeTopicsForSuspendedDelegate:(id)a0;
- (void)endDailyRefreshActivityForWrapper:(id)a0;
- (BOOL)_wrapperIsSuspended:(id)a0;
- (id)_enabledTopicsForWrapper:(id)a0;
- (void)_dailyRefreshActivityFired;
- (void)_unregisterTopicLocked:(id)a0 forDelegate:(id)a1 inEnvironment:(id)a2;
- (void)_unregisterWrapper:(id)a0 forTopic:(id)a1 inTopicDictionary:(id)a2;
- (void)_tearDownAllAPSConnectionsUnregisteringTopics:(BOOL)a0;
- (int)_overriddenPCStyleForWrapper:(id)a0;
- (void)pushPreferenceDidChange;
- (id)_suspendedTopicsForWrapper:(id)a0;
- (void)_pushRegistrationForDelegateFailed:(id)a0;

@end
