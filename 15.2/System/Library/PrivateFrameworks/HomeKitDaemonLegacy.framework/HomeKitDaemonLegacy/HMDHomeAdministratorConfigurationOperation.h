@class HMFMessageDispatcher, NSString, HMDHome, HMFMessage;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging>

@property (readonly) HMFMessage *message;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property BOOL shouldSuspendSyncing;
@property (copy) id /* block */ sendCompletionBlock;
@property (copy) id /* block */ responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)timeout;

@end
