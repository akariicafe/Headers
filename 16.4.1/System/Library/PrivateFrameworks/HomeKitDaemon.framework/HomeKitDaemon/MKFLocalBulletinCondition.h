@class MKFLocalBulletinRegistration;

@interface MKFLocalBulletinCondition : HMDManagedObject

@property (retain, nonatomic) MKFLocalBulletinRegistration *registration;

+ (id)fetchRequest;

@end
