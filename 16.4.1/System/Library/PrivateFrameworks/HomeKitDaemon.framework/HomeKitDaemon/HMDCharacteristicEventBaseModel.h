@class NSString, NSNumber;

@interface HMDCharacteristicEventBaseModel : HMDEventModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *characteristicID;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 className:(Class)a3 message:(id)a4 checkForSupport:(BOOL)a5 outCharateristic:(id *)a6;

- (id)dependentUUIDs;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
