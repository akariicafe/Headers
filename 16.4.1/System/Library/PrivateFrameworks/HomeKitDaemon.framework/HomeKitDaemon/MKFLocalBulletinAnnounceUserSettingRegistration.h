@class NSUUID;

@interface MKFLocalBulletinAnnounceUserSettingRegistration : MKFLocalBulletinRegistration

@property (nonatomic) long long announceNotificationMode;
@property (copy, nonatomic) NSUUID *homeUUID;

+ (id)fetchRequest;
+ (id)fetchAnnounceRegistrationWithHomeUUID:(id)a0 managedObjectContext:(id)a1;

@end
