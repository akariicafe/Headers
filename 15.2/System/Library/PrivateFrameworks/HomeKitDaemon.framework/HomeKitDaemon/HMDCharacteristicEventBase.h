@class HMDCharacteristic, NSUUID, NSNumber;

@interface HMDCharacteristicEventBase : HMDEvent

@property (retain, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSNumber *serviceID;
@property (readonly, nonatomic) NSNumber *characteristicInstanceID;
@property (retain, nonatomic) id previousValue;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)compareValueOfCharacteristic:(id)a0 againstValue:(id)a1 operatorType:(id)a2;
+ (id)lookForCharacteristicByAccessoryUUID:(id)a0 serviceID:(id)a1 characteristicID:(id)a2 inHome:(id)a3 checkForSupport:(BOOL)a4 outError:(id *)a5;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isActive;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)createPayload;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)_evaluateNewValue:(id)a0;
- (void)replaceCharacteristic:(id)a0;
- (void)__handleCharacteristicsChangedPayload:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)fixCharacteristicInHome:(id)a0;

@end
