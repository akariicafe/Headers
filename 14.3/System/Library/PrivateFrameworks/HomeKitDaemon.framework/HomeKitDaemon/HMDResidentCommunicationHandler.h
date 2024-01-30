@class NSUUID, NSString, HMFTimer, HMDDevice, NSMutableArray, HMDMessageDispatcher, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface HMDResidentCommunicationHandler : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMapTable *deviceMapping;
@property (readonly, nonatomic) NSMutableArray *pendingReadRequests;
@property (readonly, nonatomic) NSMapTable *dispatchedReadRequests;
@property (retain, nonatomic) HMFTimer *multiReadCoalesceTimer;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic, getter=isOwnerUser) BOOL ownerUser;
@property (readonly, weak, nonatomic) HMDMessageDispatcher *remoteDispatcher;
@property (readonly, nonatomic) HMDDevice *preferredDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)_clearAllGeneratedRequests:(id)a0 error:(id)a1;
+ (void)_clearAllPendingRequests:(id)a0 error:(id)a1;
+ (void)_processResponseForMultireadRequest:(id)a0 overallError:(id)a1 response:(id)a2;
+ (id)createResponseSubset:(id)a0 overallError:(id)a1 readRequest:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceForType:(long long)a0;
- (void)timerDidFire:(id)a0;
- (void)redispatchMessage:(id)a0 target:(id)a1 responseQueue:(id)a2;
- (void)_removeDeviceForType:(long long)a0;
- (long long)preferredDeviceType;
- (void)_sendMultipleCharacteristicRead;
- (void)_processResponse:(id)a0 overallError:(id)a1 messageIdentifier:(id)a2;
- (id)initWithHome:(id)a0 remoteDispatcher:(id)a1;
- (void)setDevice:(id)a0 forType:(long long)a1;
- (void)removeDeviceForType:(long long)a0;
- (BOOL)containsDevice:(id)a0;

@end
