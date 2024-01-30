@class NSUUID, NSNumber;

@interface HMDAccessoryBulletinNotificationRegistrationModel : HMDBulletinNotificationRegistrationModel

@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSNumber *characteristicInstanceID;

+ (id)hmbProperties;
+ (id)uuidForRemoteDeviceIdentifier:(id)a0 accessoryUUID:(id)a1 characteristicInstanceID:(id)a2;

- (id)initWithAccessoryBulletinNotificationRegistration:(id)a0;
- (id)createRegistration;

@end
