@class NSArray, NSUUID, NSNotificationCenter, HMDLightProfile;

@interface HMDLightProfileNaturalLightingAction : HMDAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *lightServices;
@property (readonly, copy) NSUUID *lightProfileUUID;
@property (retain) HMDLightProfile *lightProfile;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 actionSet:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)modelClass;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)associatedAccessories;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3;
- (void)configureWithHome:(id)a0;
- (void)handleAccessoryProfileAddedNotification:(id)a0;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2 actionSet:(id)a3 notificationCenter:(id)a4;
- (BOOL)isActionForCharacteristic:(id)a0;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (BOOL)isCompatibleWithAction:(id)a0;
- (BOOL)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)stateDump;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)writeRequestForTransitionStartWithLightProfile:(id)a0 startDate:(id)a1 type:(unsigned long long)a2;
- (BOOL)isStaleWithAccessory:(id)a0;

@end
