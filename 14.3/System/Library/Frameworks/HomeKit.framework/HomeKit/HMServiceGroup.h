@class NSUUID, NSString, NSArray, HMHome, HMApplicationData, HMMutableArray, NSObject, _HMContext, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentServices;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

+ (id)logCategory;

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)_findService:(id)a0;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (void)_addService:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeService:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleServiceAddedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (void)_handleServiceGroupRenamedNotification:(id)a0;
- (void)_removeServices:(id)a0;
- (void)addService:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeService:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
