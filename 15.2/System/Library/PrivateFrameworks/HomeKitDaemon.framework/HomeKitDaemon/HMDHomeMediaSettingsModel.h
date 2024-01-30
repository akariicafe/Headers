@class NSString, NSNumber;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSString *mediaPassword;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
