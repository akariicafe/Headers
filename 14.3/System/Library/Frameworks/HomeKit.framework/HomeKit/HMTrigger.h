@class NSUUID, NSString, NSDate, HMHome, HMUser, HMMutableArray, NSArray, HMFUnfairLock, _HMContext, NSObject, HMDevice;
@protocol OS_dispatch_queue;

@interface HMTrigger : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *currentActionSets;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic) NSDate *lastFireDate;
@property (retain, nonatomic) HMDevice *ownerDevice;
@property (weak, nonatomic) HMUser *owner;
@property (readonly, nonatomic) HMDevice *creatorDevice;
@property (readonly, weak, nonatomic) HMUser *creator;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_updateActionSetFromResponse:(id)a0 responsePayload:(id)a1;
- (void)_updateClientWithResults:(id /* block */)a0 withError:(id)a1;
- (void)_addActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateActionSet:(id)a0 add:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_removeActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_updateTriggerNameFromResponse:(id /* block */)a0 responsePayload:(id)a1;
- (void)_enable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)addActionSetOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addActionSetOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleTriggerFired:(id)a0;
- (void)_handleTriggerFiredNotification:(id)a0;
- (void)addActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)enable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)addActionSetWithCompletionHandler:(id /* block */)a0;
- (BOOL)compatibleWithApp;
- (void)_registerNotificationHandlers;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
