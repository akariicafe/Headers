@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_log, ANRapportConnectionProvider, OS_dispatch_queue, ANAnnounceReachabilityManagerDelegate;

@interface ANAnnounceReachabilityManager : NSObject <ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *homeReachability;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSArray *monitoredHomes;
@property (weak, nonatomic) id<ANAnnounceReachabilityManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)stop;
- (void)didAddHome:(id)a0;
- (void)didRemoveHome:(id)a0;
- (void)_initializeReachabilityStatus;
- (void)_rapportActivationHandler:(id)a0;
- (void)_reevaluateHomeKitReachabilityForHome:(id)a0;
- (unsigned long long)_reachabilityForHome:(id)a0;
- (unsigned long long)_reachabilityForRoom:(id)a0 inHome:(id)a1;
- (unsigned long long)_filteredReachabilityLevelFromReachabilityLevel:(unsigned long long)a0 forHome:(id)a1;
- (void)_updateReachabilityLevelWithReachabilityLevel:(unsigned long long)a0 forAccessory:(id)a1 operation:(unsigned long long)a2;
- (void)_notifyClientsReachabilityChangeForRoom:(id)a0 inHome:(id)a1 toLevel:(unsigned long long)a2;
- (void)_notifyClientsReachabilityChangeForHome:(id)a0 toLevel:(unsigned long long)a1;
- (void)connection:(id)a0 didFindDevice:(id)a1;
- (void)connection:(id)a0 didLoseDevice:(id)a1;
- (unsigned long long)reachabilityForHome:(id)a0;
- (unsigned long long)reachabilityForRoom:(id)a0 inHome:(id)a1;
- (id)monitoredRoomsForHome:(id)a0;

@end
