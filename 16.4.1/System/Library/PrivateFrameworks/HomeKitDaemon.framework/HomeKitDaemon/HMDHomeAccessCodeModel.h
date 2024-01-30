@class NSString, NSUUID;

@interface HMDHomeAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *label;
@property (copy) NSString *value;
@property (retain) NSUUID *hh2ModelID;

+ (id)properties;
+ (id)modelUUIDForHomeUUID:(id)a0 accessCodeValue:(id)a1;

- (id)initWithHomeUUID:(id)a0 value:(id)a1 label:(id)a2;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
