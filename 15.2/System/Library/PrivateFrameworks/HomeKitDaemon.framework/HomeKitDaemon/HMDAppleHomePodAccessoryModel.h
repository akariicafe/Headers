@class NSString;

@interface HMDAppleHomePodAccessoryModel : HMDAppleMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithObjectChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
