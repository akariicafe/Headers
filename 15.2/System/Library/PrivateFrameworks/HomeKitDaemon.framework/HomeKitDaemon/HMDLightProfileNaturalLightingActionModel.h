@class NSString, NSUUID, NSSet, NSNumber;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSNumber *naturalLightingEnabledField;
@property (retain) NSUUID *lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (retain) NSUUID *accessoryUUID;
@property (retain) NSSet *serviceUUIDs;

- (id)dependentUUIDs;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
