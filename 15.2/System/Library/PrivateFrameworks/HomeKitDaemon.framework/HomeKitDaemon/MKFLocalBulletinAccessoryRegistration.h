@class NSUUID;

@interface MKFLocalBulletinAccessoryRegistration : MKFLocalBulletinRegistration

@property (copy, nonatomic) NSUUID *accessoryModelID;

+ (id)fetchRequest;

@end
