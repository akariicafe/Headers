@class NSString, NSUUID, HMDHomeAdministratorHandler, NSObject;
@protocol OS_dispatch_queue, HMFMessageReceiver;

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, weak) id<HMFMessageReceiver> receiver;
@property (readonly, weak) HMDHomeAdministratorHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (id)logIdentifier;
- (void)__handleMessage:(id)a0;
- (id)initWithReceiver:(id)a0 handler:(id)a1;
- (void)registerForMessage:(id)a0 policies:(id)a1;

@end
