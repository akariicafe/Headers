@class BSAtomicSignal, NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BKSSystemShellService : NSObject <BKSSystemShellClientInterface, BKSSystemShellServiceConfiguration> {
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSAtomicSignal *_checkInCompleted;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    double _idleSleepInterval;
    BOOL _waitForDataMigration;
    BOOL _configurationFinished;
    id /* block */ _watchdogPingBlock;
    BOOL _lock_didCheckIn;
    BOOL _lock_didFinishLaunching;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (copy, nonatomic) id /* block */ collectiveWatchdogPingBlock;
@property (nonatomic) double idleSleepInterval;
@property (nonatomic) BOOL waitForDataMigration;

- (void)restartWithOptions:(unsigned long long)a0;
- (void)didFinishLaunching;
- (id)initWithConfigurator:(id /* block */)a0;
- (void)setIndependentWatchdogEnabled:(BOOL)a0;
- (void)_activateServerConnectionWithIdleSleepInterval:(double)a0;
- (void)_reconnect:(id)a0;
- (BOOL)collectiveWatchdogPing;
- (void)start;
- (void)_checkIn;
- (void).cxx_destruct;

@end
