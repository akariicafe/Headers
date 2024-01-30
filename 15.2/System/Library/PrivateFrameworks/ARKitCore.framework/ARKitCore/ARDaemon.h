@class ARDaemonServiceListener, NSArray, NSString, ARControlListener, ARServer, NSTimer, ARMemoryPressureMonitor;

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate> {
    BOOL _anonymousListenerEnabled;
    ARControlListener *_controlListener;
    NSTimer *_heartbeatTimer;
    ARDaemonServiceListener *_listener;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (readonly, nonatomic) ARServer *server;
@property (readonly, nonatomic) NSArray *runningRemoteServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fullDescription;
+ (id)_runningDaemons;
+ (id)anonymousListenerDaemonWithLibraryImageName:(const char *)a0;
+ (id)anonymousListenerDaemon;

- (void)shutdown;
- (void)startup;
- (void).cxx_destruct;
- (id)init;
- (void)printInfo;
- (void)dealloc;
- (id)_fullDescription;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (void)memoryPressureMonitor:(id)a0 didUpdateSystemMemoryPressureCondition:(long long)a1;
- (void)memoryPressureMonitor:(id)a0 didUpdateProcessMemoryPressureCondition:(long long)a1;
- (id)initWithAnonymousListenerEnabled:(BOOL)a0 libraryImageName:(const char *)a1;
- (id)initWithAnonymousListenerEnabled:(BOOL)a0;
- (void)startWithReplayURL:(id)a0 deterministic:(BOOL)a1 services:(id)a2 replayDelegate:(id)a3;

@end
