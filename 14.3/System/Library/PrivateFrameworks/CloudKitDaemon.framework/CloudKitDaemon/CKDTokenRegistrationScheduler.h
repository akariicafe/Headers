@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CKDAccountInfoProvider;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>

@property (nonatomic) BOOL schedulerIsAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *callbackBlocks;
@property (retain, nonatomic) NSMutableDictionary *callbackTimers;
@property (retain, nonatomic) NSMutableSet *operations;
@property (retain, nonatomic) id<CKDAccountInfoProvider> unitTestingAccountInfoProvider;
@property (retain, nonatomic) NSMutableDictionary *unitTestingPushTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedScheduler;
+ (id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)a0 accountInfoProvider:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)setSchedulerAvailable:(BOOL)a0;
- (void)dealloc;
- (void)unregisterTokenForAppContainerAccountTuple:(id)a0 contextInfoProvider:(id)a1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (void)registerTokenForAppContainerAccountTuple:(id)a0 contextInfoProvider:(id)a1 accountInfoProvider:(id)a2 completionBlock:(id /* block */)a3;
- (void)_handlePushToken:(id)a0 forAppContainerAccountTuple:(id)a1 applicationMetadata:(id)a2 appContainerIntersectionMetadata:(id)a3;
- (void)_refreshApsToken:(id)a0 appContainerAccountTuple:(id)a1 apsEnvironmentString:(id)a2 pushBundleIdentifier:(id)a3 isCKSystemService:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)refreshAllClientsNow:(BOOL)a0;
- (void)unregisterAllTokensForAccountID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeApsToken:(id)a0 appContainerAccountTuple:(id)a1 apsEnvironmentString:(id)a2 pushBundleIdentifier:(id)a3 isCKSystemService:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)handlePublicPushTokenDidUpdate:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0;
- (void)tokenRefreshChanged;
- (void)registerTokenRefreshActivity;
- (void)forceTokenRefreshForAllClients;

@end
