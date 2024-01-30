@class NSUUID, NSString, NSArray, HMAccessory, HMHome, NSObject, _HMContext, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, nonatomic) _HMContext *context;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_registerNotificationHandlers;
- (void)handleRuntimeStateUpdate:(id)a0;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_recomputeAssistantIdentifier;
- (void)recomputeAssistantIdentifier;
- (id)initWithUUID:(id)a0 services:(id)a1;

@end
