@class NSNumber;

@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject

@property (copy) NSNumber *announceNotificationModeForCurrentDevice;

+ (id)properties;
+ (id)modelIDNamespace;

- (id)modelIDForUser:(id)a0;
- (id)initWithUserUUID:(id)a0;

@end
