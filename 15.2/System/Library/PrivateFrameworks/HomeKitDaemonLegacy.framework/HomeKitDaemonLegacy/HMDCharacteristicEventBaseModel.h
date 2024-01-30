@class NSString, NSNumber;

@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *characteristicID;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 className:(Class)a3 message:(id)a4 checkForSupport:(BOOL)a5 outCharateristic:(id *)a6;

- (id)dependentUUIDs;

@end
