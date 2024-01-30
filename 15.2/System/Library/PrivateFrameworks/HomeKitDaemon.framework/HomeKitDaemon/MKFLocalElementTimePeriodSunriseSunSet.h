@class NSString, NSDateComponents;

@interface MKFLocalElementTimePeriodSunriseSunSet : MKFLocalElementTimePeriod

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSString *significantEvent;

+ (id)fetchRequest;

@end
