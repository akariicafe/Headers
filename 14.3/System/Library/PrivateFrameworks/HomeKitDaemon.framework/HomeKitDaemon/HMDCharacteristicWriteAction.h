@class HMDCharacteristic, NSDictionary, NSString;

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly, nonatomic) NSDictionary *actionInformation;
@property (readonly, nonatomic) NSString *dumpState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)requiresDeviceUnlock;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)associatedAccessories;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)stateDump;
- (unsigned long long)entitlementsForNotification;
- (BOOL)isActionForCharacteristic:(id)a0;
- (id)initWithUUID:(id)a0 characteristic:(id)a1 targetValue:(id)a2 actionSet:(id)a3;
- (void)replaceCharacteristic:(id)a0;
- (void)_processWriteActionModelUpdated:(id)a0 message:(id)a1;
- (BOOL)isSecureAction;

@end
