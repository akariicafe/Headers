@class NSUUID, HMFUnfairLock, NSNotificationCenter, HMDLightProfile;

@interface HMDLightProfileNaturalLightingAction : HMDAction

@property (readonly) HMFUnfairLock *lock;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSUUID *lightProfileUUID;
@property (retain) HMDLightProfile *lightProfile;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 actionSet:(id)a1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (Class)modelClass;
- (void)encodeWithCoder:(id)a0;
- (id)associatedAccessories;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)stateDump;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (void)configureWithHome:(id)a0;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3 notificationCenter:(id)a4;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3;
- (void)handleAccessoryProfileAddedNotification:(id)a0;

@end
