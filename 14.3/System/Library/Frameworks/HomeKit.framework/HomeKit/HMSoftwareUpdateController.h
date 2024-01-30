@class HMSoftwareUpdate, NSUUID, _HMContext, HMAccessory, NSString, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue, HMSoftwareUpdateControllerDelegate;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak) HMAccessory *accessory;
@property (retain) HMSoftwareUpdate *availableUpdate;
@property (readonly, getter=isControllable) BOOL controllable;
@property (weak) id<HMSoftwareUpdateControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)namespace;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)configureWithContext:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)a0;
- (void)startUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeUpdateSource:(long long)a0 path:(id)a1 documentationPath:(id)a2 completion:(id /* block */)a3;
- (BOOL)isEqual:(id)a0;
- (id)messageDestination;
- (id)logIdentifier;

@end
