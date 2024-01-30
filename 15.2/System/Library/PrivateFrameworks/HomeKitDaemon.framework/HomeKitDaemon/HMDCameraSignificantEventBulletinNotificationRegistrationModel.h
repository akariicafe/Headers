@class NSUUID, NSNumber;

@interface HMDCameraSignificantEventBulletinNotificationRegistrationModel : HMDBulletinNotificationRegistrationModel

@property (retain, nonatomic) NSUUID *cameraIdentifier;
@property (retain, nonatomic) NSNumber *notificationModes;
@property (retain, nonatomic) NSNumber *significantEventTypes;
@property (retain, nonatomic) NSNumber *personFamiliarityOptions;

+ (id)hmbProperties;
+ (id)uuidForRemoteDeviceIdentifier:(id)a0 cameraIdentifier:(id)a1;

- (id)createRegistration;
- (id)initWithSignificantEventBulletinNotificationRegistration:(id)a0;

@end
