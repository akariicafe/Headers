@class STDowntime;

@interface STDailySchedule : NSManagedObject

@property (nonatomic) long long weekday;
@property (nonatomic) long long startHour;
@property (nonatomic) long long startMinute;
@property (nonatomic) long long endHour;
@property (nonatomic) long long endMinute;
@property (retain, nonatomic) STDowntime *downtime;

@end
