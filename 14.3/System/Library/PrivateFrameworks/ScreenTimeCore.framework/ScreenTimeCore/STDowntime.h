@class NSString, NSSet;

@interface STDowntime : NSManagedObject

@property (copy, nonatomic) NSString *calendarIdentifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL canAskForMoreTime;
@property (copy, nonatomic) NSSet *schedule;

- (void)setStartHour:(long long)a0 startMinute:(long long)a1 endHour:(long long)a2 endMinute:(long long)a3;

@end
