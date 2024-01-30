@class MKFLocalElementTimePeriod;

@interface MKFLocalBulletinConditionTimePeriod : MKFLocalBulletinCondition

@property (retain, nonatomic) MKFLocalElementTimePeriod *endElement;
@property (retain, nonatomic) MKFLocalElementTimePeriod *startElement;

+ (id)fetchRequest;

@end
