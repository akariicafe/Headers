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

+ (id)actionSetFromProtoBuf:(id)a0 home:(id)a1;
+ (id)allowedActionClasses;
+ (id)shortcutsComponentActionSet;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (BOOL)requiresDeviceUnlock;
- (void)_unconfigure;
- (id)encodeAsProtoBuf;
- (id)initWithShortcutsDictionaryRepresentation:(id)a0 home:(id)a1;
- (void)_addAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_doAddAction:(id)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_doRemoveActionWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLastExecutionDate:(id)a0;
- (void)_handleActionAddedNotification:(id)a0;
- (void)_handleActionRemovedNotification:(id)a0;
- (void)_handleActionUpdatedNotification:(id)a0;
- (void)_handleActionSetRenamedNotification:(id)a0;
- (void)_handleActionSetStartExecutionNotification:(id)a0;
- (void)_handleActionSetExecutedNotification:(id)a0;
- (void)addAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAction:(id)a0 changes:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateApplicationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (id)initWithName:(id)a0 type:(id)a1 uuid:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
