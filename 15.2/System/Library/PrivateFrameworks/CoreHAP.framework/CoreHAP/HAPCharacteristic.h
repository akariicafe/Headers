@class NSData, CBCharacteristic, NSString, NSDate, HAPCharacteristicMetadata, HAPService, NSNumber, HMFUnfairLock;

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, HMFMerging, NSCopying> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPService *service;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) BOOL eventNotificationsEnabled;
@property (copy, nonatomic) HAPCharacteristicMetadata *metadata;
@property (readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (nonatomic) BOOL shouldValidateValueAfterReading;
@property (readonly, nonatomic, getter=isWriteWithResponseImplicitlySupported) BOOL implicitWriteWithResponse;
@property (copy, nonatomic, setter=setValue:) id value;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) BOOL supportsAdditionalAuthorizationData;
@property (readonly, nonatomic) BOOL supportsWriteWithResponse;
@property (nonatomic) BOOL prohibitCaching;
@property (readonly, nonatomic) BOOL supportsEventNotificationContext;
@property (retain, nonatomic) NSData *notificationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hap2_shortTypeFromUUID:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldMergeObject:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (id)propertiesDescription;
- (void)setStateNumber:(id)a0;
- (id)validateValue:(id)a0 outValue:(id *)a1;
- (BOOL)hap2_mergeWithCharacteristic:(id)a0;
- (BOOL)hap2_canUseCachedValue;
- (void)_updateMetadata:(id)a0 withProvidedMetadata:(id)a1;
- (id)_generateValidMetadata:(id)a0;
- (id)initWithType:(id)a0 instanceID:(id)a1 value:(id)a2 stateNumber:(id)a3 properties:(unsigned long long)a4 eventNotificationsEnabled:(BOOL)a5 metadata:(id)a6;
- (id)initWithType:(id)a0 instanceID:(id)a1 value:(id)a2 stateNumber:(id)a3 properties:(unsigned long long)a4 eventNotificationsEnabled:(BOOL)a5 implicitWriteWithResponse:(BOOL)a6 metadata:(id)a7;
- (BOOL)isEqualToCharacteristic:(id)a0;

@end
