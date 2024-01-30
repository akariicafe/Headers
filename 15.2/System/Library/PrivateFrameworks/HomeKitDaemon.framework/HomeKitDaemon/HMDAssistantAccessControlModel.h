@class NSString, NSNumber, NSArray;

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *options;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (copy, nonatomic) NSArray *accessoryModelIDs;
@property (copy, nonatomic) NSArray *siriEndpointAccessoryModelUUIDs;
@property (retain, nonatomic) NSString *changeTag;

+ (id)properties;

- (id)dependentUUIDs;

@end
