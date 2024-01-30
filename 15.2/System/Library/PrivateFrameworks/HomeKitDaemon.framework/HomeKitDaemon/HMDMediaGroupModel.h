@class NSString;

@interface HMDMediaGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *name;

+ (id)properties;

- (id)initWithUUID:(id)a0 parentUUID:(id)a1 name:(id)a2 changeType:(unsigned long long)a3;

@end
