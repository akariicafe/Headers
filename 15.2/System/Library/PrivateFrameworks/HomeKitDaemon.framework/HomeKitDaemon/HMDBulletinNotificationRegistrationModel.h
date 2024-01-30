@class NSData, NSUUID, NSSet;

@interface HMDBulletinNotificationRegistrationModel : HMBModel

@property (retain) NSData *conditionData;
@property (retain, nonatomic) NSUUID *remoteDeviceIdentifier;
@property (retain, nonatomic) NSSet *conditions;

+ (id)hmbProperties;

@end
