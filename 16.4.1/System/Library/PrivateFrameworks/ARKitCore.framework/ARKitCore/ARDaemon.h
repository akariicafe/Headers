@class NSTimer, NSString, NSArray, ARDaemonServiceListener, ARServer, ARMemoryPressureMonitor, NSUUID, ARSystemTimeSnapshot;

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate> {
    BOOL _anonymousListenerEnabled;
    NSTimer *_heartbeatTimer;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
}

@property (class, readonly, weak, nonatomic) ARDaemon *localAnonymousListenerDaemon;

@property (readonly, nonatomic) ARDaemonServiceListener *listener;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) ARServer *server;
@property (readonly, nonatomic) NSArray *runningRemoteServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fullDescription;
+ (id)_runningDaemons;
+ (id)createAnonymousListenerDaemon;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)a0 deterministic:(BOOL)a1 replayDelegate:(id)a2;

- (void)startup;
- (void)printInfo;
- (void)shutdown;
- (void)dealloc;
- (id)_fullDescription;
- (void).cxx_destruct;
- (id)initWithSpawnTime:(id)a0 watchdogMonitor:(id)a1;
- (id)initWithSpawnTime:(id)a0 watchdogMonitor:(id)a1 anonymousListenerEnabled:(BOOL)a2 graphScheduler:(id)a3 replayDelegate:(id)a4;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (void)memoryPressureMonitor:(id)a0 didUpdateProcessMemoryPressureCondition:(long long)a1;
- (void)memoryPressureMonitor:(id)a0 didUpdateSystemMemoryPressureCondition:(long long)a1;
- (void)startWithServices:(id)a0;

@end
