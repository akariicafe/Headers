@class NSString, NSArray, ARUserProfile, ARDaemonService, ARAlgorithmConfiguration, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARControlListenerDelegate, ARLoggingFullDescription> {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    ARAlgorithmConfiguration *_currentConfiguration;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_latestTaskErrorMap;
    unsigned long long _batchServicesCount;
    NSMutableArray *_batchedServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesSemaphore;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSObject<OS_dispatch_source> *_statusTimer;
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

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)_fullDescription;
- (void)_removeService:(id)a0;
- (BOOL)_addService:(id)a0;
- (id)service:(id)a0 peerServiceOfType:(Class)a1;
- (void)didDiscoverControl:(id)a0;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (void)didDiscoverService:(id)a0;
- (long long)numberOfActiveConnectionsForService:(id)a0;
- (void)setAllTasksPerformanceStatsToActive:(BOOL)a0;
- (id)_initInProcess:(BOOL)a0 libraryImageName:(const char *)a1;
- (void)_setupStatusTimer;
- (BOOL)_addServices:(id)a0;
- (BOOL)_updateWithServices:(id)a0 errorString:(id *)a1;
- (id)_peerServicesOfService:(id)a0;
- (void)_logDaemonStatusWithType:(id)a0;
- (BOOL)updateAlgorithmConfigurationWithService:(id)a0;
- (BOOL)updateAlgorithmConfigurationWithServices:(id)a0;
- (id)initInProcessWithLibraryImageName:(const char *)a0;
- (BOOL)commitServices:(id)a0;

@end
