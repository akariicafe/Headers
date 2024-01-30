@class MKFLocalBulletinRegistration;

@interface MKFLocalBulletinCondition : NSManagedObject

@property (retain, nonatomic) MKFLocalBulletinRegistration *registration;

+ (id)fetchRequest;

@end
