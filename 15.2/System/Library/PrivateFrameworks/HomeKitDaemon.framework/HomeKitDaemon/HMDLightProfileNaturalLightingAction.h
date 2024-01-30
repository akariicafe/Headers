@class NSArray, NSUUID, HMFUnfairLock, NSNotificationCenter, HMDLightProfile;

@interface HMDLightProfileNaturalLightingAction : HMDAction

@property (readonly) HMFUnfairLock *lock;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *lightServices;
@property (readonly, copy) NSUUID *lightProfileUUID;
@property (retain) HMDLightProfile *lightProfile;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 actionSet:(id)a1;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (Class)modelClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (id)associatedAccessories;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)stateDump;
- (BOOL)isUnsecuringAction;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (void)configureWithHome:(id)a0;
- (BOOL)isActionForCharacteristic:(id)a0;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3 notificationCenter:(id)a4;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3;
- (void)handleAccessoryProfileAddedNotification:(id)a0;

@end
