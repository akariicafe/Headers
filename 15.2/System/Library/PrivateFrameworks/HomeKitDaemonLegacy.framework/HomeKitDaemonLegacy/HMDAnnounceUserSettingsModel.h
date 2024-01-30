@class NSNumber;

@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject

@property (copy) NSNumber *announceNotificationModeForCurrentDevice;

+ (id)properties;
+ (id)modelIDNamespace;

- (id)initWithUser:(id)a0;
- (id)modelIDForUser:(id)a0;

@end
