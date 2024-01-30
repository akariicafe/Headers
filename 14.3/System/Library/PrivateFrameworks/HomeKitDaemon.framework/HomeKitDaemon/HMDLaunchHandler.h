@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLaunchHandler : HMFObject <HMFLogging>

@property (class, readonly, copy, nonatomic) NSString *relaunchPlistPath;
@property (class, readonly, nonatomic) HMDLaunchHandler *sharedHandler;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, nonatomic) NSMutableSet *registeredRelaunchClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)_fileExistsAtPath:(id)a0;
+ (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
+ (BOOL)_writeDictionary:(id)a0 toFileURL:(id)a1 error:(id *)a2;
+ (int)_setJetsamPriorityUsingCommand:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForRelaunch:(id)a0;
- (void)deregisterForRelaunch:(id)a0;
- (void)_updateOrRemoveRelaunchPlist;
- (void)_setJetsamPriorityElevated:(BOOL)a0;
- (void)removePersistentRelaunchRegistrationsIfNecessary;

@end
