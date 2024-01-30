@class NSString, NSURL, NSMutableSet, NSObject;
@protocol HMDFileManager, OS_dispatch_queue;

@interface HMDLaunchHandler : HMFObject <HMFLogging>

@property (class, readonly, nonatomic) HMDLaunchHandler *sharedHandler;

@property (readonly, copy, nonatomic) NSURL *relaunchPlistFileURL;
@property (readonly, nonatomic) id<HMDFileManager> fileManager;
@property (readonly, nonatomic) id /* block */ jetsamPriorityHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, nonatomic) NSMutableSet *registeredRelaunchClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRelaunchPlistFileURL:(id)a0 fileManager:(id)a1 jetsamPriorityHandler:(id /* block */)a2;
- (void)registerRelaunchClientWithUUID:(id)a0;
- (void)_setJetsamPriorityElevated:(BOOL)a0;
- (void)_updateOrRemoveRelaunchPlist;
- (void)deregisterRelaunchClientWithUUID:(id)a0;
- (void)removePersistentRelaunchRegistrationsIfNecessary;

@end
