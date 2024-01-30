@class NSUUID, NSDictionary, NSString, NSArray, HMDActionSet;

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDActionSet *actionSet;
@property (copy, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *stateDump;
@property (readonly) BOOL requiresDeviceUnlock;
@property (readonly) unsigned long long entitlementsForNotification;
@property (readonly, copy) NSArray *associatedAccessories;
@property (readonly) BOOL isUnsecuringAction;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)configureWithHome:(id)a0;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithUUID:(id)a0 actionSet:(id)a1;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (BOOL)isCompatibleWithAction:(id)a0;
- (id)modelBackedObjects;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateActionSetIfNil:(id)a0;

@end
