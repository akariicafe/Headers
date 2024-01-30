@class HMDHome, HMFMessage, NSString;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging>

@property (readonly) HMFMessage *message;
@property (readonly, weak) HMDHome *home;
@property BOOL shouldSuspendSyncing;
@property (copy) id /* block */ sendCompletionBlock;
@property (copy) id /* block */ responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)timeout;

- (void).cxx_destruct;
- (void)main;
- (id)messageDispatcher;
- (id)logIdentifier;
- (id)initWithMessage:(id)a0 home:(id)a1;

@end
