@class HMDHAPAccessory, NSString, NSUUID, NSDate, NSSet, HMDService, NSDictionary, HMDCharacteristicMetadata, NSData, NSMutableSet, NSNumber;
@protocol HMFLocking;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState> {
    id<HMFLocking> _lock;
    NSMutableSet *_notificationRegistrations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (retain, nonatomic) NSSet *hapCharacteristicTuples;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) NSString *characteristicType;
@property (retain, nonatomic) id lastKnownValue;
@property (retain, nonatomic) NSDate *lastKnownValueUpdateTime;
@property (retain, nonatomic) NSNumber *characteristicInstanceID;
@property (nonatomic) long long characteristicProperties;
@property (readonly, copy, nonatomic) NSSet *notificationRegistrations;
@property (retain, nonatomic) NSDate *notificationEnabledTime;
@property (nonatomic) BOOL notificationRegisteredWithRemoteGateway;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, weak, nonatomic) HMDService *service;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (readonly, nonatomic) long long properties;
@property (readonly, copy, nonatomic) id value;
@property (copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber;
@property (readonly, nonatomic) HMDCharacteristicMetadata *metadata;
@property (copy, nonatomic) NSData *authorizationData;
@property (nonatomic) BOOL broadcastNotificationEnabled;
@property (readonly) BOOL shouldIgnoreCacheValueForRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)value:(id)a0 differentThan:(id)a1;
+ (id /* block */)sortComparatorForCharacteristicDictionary;

- (BOOL)isNotificationEnabled;
- (BOOL)updateWithDictionary:(id)a0;
- (id)init;
- (id)shortTypeDescription;
- (void).cxx_destruct;
- (void)unconfigure;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (BOOL)supportsNotification;
- (BOOL)isNonHomeNotificationsEnabled;
- (BOOL)isClientNotificationEnabled;
- (BOOL)isNotificationEnabledForClientIdentifierPrefix:(id)a0;
- (BOOL)isNonClientNotificationEnabled;
- (BOOL)isValueUpdatedFromHAPCharacteristic:(id)a0;
- (void)updateValue:(id)a0 updatedTime:(id)a1 stateNumber:(id)a2;
- (id)validateValueForWrite:(id)a0 outValue:(id *)a1;
- (BOOL)supportsRead;
- (void)setNotificationEnabled:(BOOL)a0 forClientIdentifier:(id)a1;
- (id)characteristicForHAPAccessory:(id)a0;
- (void)unconfigureForServerIdentifier:(id)a0 linkType:(long long)a1;
- (BOOL)deregisterNotificationForClientIdentifier:(id)a0;
- (BOOL)isNotificationEnabledForClientIdentifier:(id)a0;
- (BOOL)supportsWrite;
- (id)initWithCharacteristic:(id)a0 service:(id)a1 accessory:(id)a2;
- (void)configureWithCharacteristic:(id)a0;
- (void)updateLastKnownValue;
- (id)getCharacteristicDictionary;
- (id)characteristicTypeDescription;
- (id)hapCharacteristicTupleWithIdentifier:(id)a0 linkType:(long long)a1;
- (id)validateValue:(id)a0 outValue:(id *)a1;
- (id)validateValueForNotify:(id)a0 outValue:(id *)a1;
- (void)updateService:(id)a0 accessory:(id)a1;

@end
