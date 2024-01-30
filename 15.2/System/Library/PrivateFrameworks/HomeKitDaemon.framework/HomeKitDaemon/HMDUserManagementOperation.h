@class HMDUserManagementOperationManager, NSDate, NSDictionary, NSObject, HAPPairingIdentity, NSMutableArray, HMDAccessory, NSString, HMDUser, HMDAccessoryInvitation, NSArray, HMFTimer, NSUUID;
@protocol OS_dispatch_queue, HMDUserManagementOperationDelegate, HMFLocking;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding> {
    id<HMFLocking> _lock;
    NSMutableArray *_dependencies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (retain, nonatomic) HMDUserManagementOperationManager *operationManager;
@property (readonly, nonatomic) double backoffInterval;
@property (retain, nonatomic) HMFTimer *backoffTimer;
@property (nonatomic, getter=isBackingOff) BOOL backingOff;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic, getter=isAddOperation) BOOL addOperation;
@property (readonly, nonatomic, getter=isRemoveOperation) BOOL removeOperation;
@property (readonly, nonatomic, getter=isAuditOperation) BOOL auditOperation;
@property (retain, nonatomic) NSArray *auditUsersToBeAdded;
@property (nonatomic) BOOL lastOperationFailed;
@property (readonly, nonatomic) HMDAccessoryInvitation *accessoryInvitation;
@property (readonly, nonatomic) NSDictionary *accessoryInvitationInformation;
@property (weak) id<HMDUserManagementOperationDelegate> delegate;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long operationType;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (copy, nonatomic) HAPPairingIdentity *ownerPairingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)shortDescription;
+ (id)operationWithDictionary:(id)a0 home:(id)a1;
+ (id)removeUserManagementOperationForUser:(id)a0 accessory:(id)a1 model:(id)a2;
+ (id)addUserManagementOperationForUser:(id)a0 accessory:(id)a1 model:(id)a2;
+ (id)auditUserManagementOperationAccessory:(id)a0 model:(id)a1;

- (void)timerDidFire:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void)addDependency:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryEncoding;
- (void)cancel;
- (BOOL)isValid;
- (BOOL)_isFinished;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 parentUUID:(id)a1;
- (void)executeWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)populateModelObjectWithChangeType:(id)a0 version:(long long)a1;
- (id)initWithOperationType:(unsigned long long)a0 identifier:(id)a1 user:(id)a2 accessory:(id)a3 expiration:(id)a4;
- (void)_setupExpirationTimer;
- (void)updateDelegate:(id)a0;
- (double)nextBackoffInterval;
- (void)_startBackoffTimer;
- (void)_endBackoffTimer;
- (id)_findConflictingAccessory:(id)a0;
- (void)_addPairingToHAPAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removePairingFromHAPAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (void)_auditPairingsForHAPAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)mergeWithOperation:(id)a0;
- (long long)_accessoryInvitationState;
- (id)transactionWithObjectChangeType:(unsigned long long)a0 parentUUID:(id)a1;

@end
