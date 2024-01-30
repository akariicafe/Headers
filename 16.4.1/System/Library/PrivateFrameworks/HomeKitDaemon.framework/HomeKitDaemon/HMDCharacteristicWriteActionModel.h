@class NSString, NSNumber;

@interface HMDCharacteristicWriteActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) id targetValue;

- (void)loadModelWithActionInformation:(id)a0;
- (id)dependentUUIDs;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;
- (BOOL)cd_updateManagedObjectInContext:(id)a0 error:(id *)a1;

@end
