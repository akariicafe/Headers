@class NSUUID, _HMContext, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, HMUserCloudShareManagerDelegate;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver>

@property (readonly, nonatomic) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isRegistered) BOOL registered;
@property (retain, nonatomic) NSArray *containerIDs;
@property (weak) id<HMUserCloudShareManagerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)reconnect;
- (void)configure;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerWithCompletion:(id /* block */)a0;
- (void)registerForContainerIDs:(id)a0 completion:(id /* block */)a1;
- (void)_handleDidReceiveRepairRequest:(id)a0;
- (id)messageDestination;
- (void)__registerForMessages;
- (void)_handleDidReceiveShare:(id)a0;

@end
