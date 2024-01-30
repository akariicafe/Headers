@class NSString, NSNumber, NSData;

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *value;
@property (copy, nonatomic) NSNumber *configurationVersion;

+ (id)properties;
+ (id)schemaHashRoot;


@end
