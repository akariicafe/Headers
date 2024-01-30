@class NSString, IDSURI, NSNumber;

@interface HMDAccountHandleModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IDSURI *idsURI;
@property (retain, nonatomic) NSNumber *local;

+ (id)properties;
+ (id)schemaHashRoot;


@end
