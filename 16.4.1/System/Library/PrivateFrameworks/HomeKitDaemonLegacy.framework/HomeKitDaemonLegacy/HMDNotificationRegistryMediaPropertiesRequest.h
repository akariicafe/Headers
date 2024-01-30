@class NSUUID, NSMutableSet;

@interface HMDNotificationRegistryMediaPropertiesRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *mediaProfileUUID;
@property (retain) NSMutableSet *mediaProperties;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithEnable:(BOOL)a0 userID:(id)a1 mediaProfileUUID:(id)a2;

@end
