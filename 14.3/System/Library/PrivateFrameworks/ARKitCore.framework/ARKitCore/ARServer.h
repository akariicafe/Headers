@class NSString, NSDictionary, NSMutableSet, NSMutableArray;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate> {
    NSMutableArray *_services;
    NSMutableSet *_servicesClasses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
}

@property (readonly, nonatomic) NSString *statusString;
@property (readonly, nonatomic) NSDictionary *statusDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addService:(id)a0;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)_removeService:(id)a0;
- (id)service:(id)a0 peerServiceOfType:(Class)a1;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (BOOL)didDiscoverService:(id)a0;
- (long long)numberOfActiveConnectionsForService:(id)a0;
- (BOOL)_isServiceDisabledByDefaults:(id)a0;
- (void)_updateWithServices;
- (id)_peerServicesOfService:(id)a0;

@end
