@class NSString, NSNumber;

@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSNumber *announceNotificationModeForCurrentDevice;

+ (id)properties;
+ (id)modelIDNamespace;

- (id)initWithUser:(id)a0;
- (id)modelIDForUser:(id)a0;

@end
