@class NSMutableDictionary, ARUserProfile, NSDictionary, NSObject, ARControlListener, ARDaemonService, ARAlgorithmConfiguration, NSMutableArray, NSString, NSMutableSet, ARSystemTimeSnapshot, NSArray, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription> {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    NSMutableDictionary *_servicesByPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    ARAlgorithmConfiguration *_currentConfiguration;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_latestTaskErrorMap;
    unsigned long long _batchServicesCount;
    NSMutableArray *_batchedServices;
    NSMutableArray *_lastRunningDaemonServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesSemaphore;
    ARControlListener *_controlListener;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_source> *_statusTimer;
    BOOL _inProcess;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
}

@property (retain) NSArray *servicesBeingAdded;
@property (retain) ARDaemonService *serviceBeingRemoved;
@property BOOL isKeybagUnlocked;
@property (retain, nonatomic) ARUserProfile *userProfile;
@property (readonly, nonatomic) NSString *statusString;
@property (readonly, nonatomic) NSDictionary *statusDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setServices:(id)a0;
- (void)suspend;
- (void)dealloc;
- (id)_fullDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)_removeService:(id)a0;
- (BOOL)commitServices:(id)a0;
- (BOOL)_addService:(id)a0;
- (BOOL)_addServices:(id)a0;
- (void)_configureServiceForExecution:(id)a0;
- (void)_logDaemonStatusWithType:(id)a0;
- (id)_peerServicesOfService:(id)a0;
- (void)_setupStatusTimer;
- (void)_updateServicesByPID;
- (BOOL)_updateWithServices:(id)a0 dryRun:(BOOL)a1 parameters:(id *)a2 error:(id *)a3;
- (BOOL)_updateWithServices:(id)a0 error:(id *)a1;
- (id)daemonServiceForServiceNamed:(id)a0;
- (void)didDiscoverControl:(id)a0;
- (void)didDiscoverService:(id)a0;
- (id)initInProcess:(BOOL)a0 spawnTime:(id)a1 sessionUUID:(id)a2 watchdogMonitor:(id)a3 executionManager:(id)a4;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (long long)numberOfActiveConnectionsForService:(id)a0;
- (id)service:(id)a0 peerServiceOfType:(Class)a1;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (BOOL)updateAlgorithmConfigurationWithService:(id)a0;
- (BOOL)updateAlgorithmConfigurationWithServices:(id)a0;

@end
