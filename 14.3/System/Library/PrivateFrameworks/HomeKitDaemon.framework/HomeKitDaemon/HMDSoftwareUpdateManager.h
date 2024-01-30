@class NSUUID, HMDAppleMediaAccessory, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSHashTable *activeClients;
@property (weak) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (void)registerForMessages;
- (id)messageDispatcher;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)a0;
- (void)startUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)messageDestination;
- (void)updateAvailableUpdate:(id)a0;
- (void)_handleStart:(id)a0;
- (void)_handleStop:(id)a0;
- (void)_handleUpdateAvailableUpdate:(id)a0;

@end
