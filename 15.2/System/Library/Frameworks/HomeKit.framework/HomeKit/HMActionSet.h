@class NSUUID, NSString, HMHome, NSDate, NSSet, HMMutableArray, NSDictionary, HMApplicationData, _HMContext, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMMutableArray *currentActions;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (weak, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL executionInProgress;
@property (readonly, copy, nonatomic) NSSet *actions;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, copy, nonatomic) NSString *actionSetType;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastExecutionDate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (retain, nonatomic) HMApplicationData *applicationData;

+ (id)allowedActionClasses;
+ (id)shortcutsComponentActionSet;
+ (id)actionSetFromProtoBuf:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (BOOL)requiresDeviceUnlock;
- (void)_unconfigureContext;
- (id)initWithShortcutsDictionaryRepresentation:(id)a0 home:(id)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_registerNotificationHandlers;
- (void)_recomputeAssistantIdentifier;
- (void)recomputeAssistantIdentifier;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)encodeAsProtoBuf;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 type:(id)a1 uuid:(id)a2;
- (void)setLastExecutionDate:(id)a0;
- (void)addAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAction:(id)a0 changes:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_doAddAction:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_addActionFromResponse:(id)a0 withAction:(id)a1 completion:(id /* block */)a2;
- (BOOL)_doRemoveActionWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_handleActionRemovedFromPayload:(id)a0 completion:(id /* block */)a1;
- (BOOL)_handleActionUpdatedFromResponse:(id)a0 completion:(id /* block */)a1;
- (BOOL)_handleActionSetRenameFromPayload:(id)a0 completion:(id /* block */)a1;
- (void)_handleActionSetStartExecutionNotification:(id)a0;
- (void)_handleActionSetExecutedNotification:(id)a0;

@end
