@class MKFLocalBulletinConditionTimePeriod;

@interface MKFLocalElementTimePeriod : NSManagedObject

@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *endCondition;
@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *startCondition;

+ (id)fetchRequest;

@end
