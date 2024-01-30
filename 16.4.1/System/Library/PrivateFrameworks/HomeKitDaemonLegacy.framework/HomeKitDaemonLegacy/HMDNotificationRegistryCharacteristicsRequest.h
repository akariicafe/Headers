@class NSUUID, NSMutableSet;

@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *accessoryUUID;
@property (retain) NSMutableSet *characteristicInstanceIDs;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithEnable:(BOOL)a0 userID:(id)a1 accessoryUUID:(id)a2;

@end
