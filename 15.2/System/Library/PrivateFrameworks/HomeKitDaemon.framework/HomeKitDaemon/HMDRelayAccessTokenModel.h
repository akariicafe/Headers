@class NSString, NSData;

@interface HMDRelayAccessTokenModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSData *accessToken;

+ (id)properties;

- (id)dependentUUIDs;

@end
