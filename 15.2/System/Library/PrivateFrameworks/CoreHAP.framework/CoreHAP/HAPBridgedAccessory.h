@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>

@property (weak, nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortDescription;
- (void)setReachable:(BOOL)a0;
- (BOOL)isPrimary;
- (void).cxx_destruct;
- (BOOL)shouldMergeObject:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)a0;
- (void)accessoryServer:(id)a0 didUpdateValueForCharacteristic:(id)a1;
- (id)initWithServer:(id)a0 instanceID:(id)a1 parsedServices:(id)a2;
- (BOOL)__isReachable;
- (BOOL)__parseServices;
- (BOOL)__parseBridgeService:(id)a0;
- (BOOL)mergeWithAccessory:(id)a0;

@end
