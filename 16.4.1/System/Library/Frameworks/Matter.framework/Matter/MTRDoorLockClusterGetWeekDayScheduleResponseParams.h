@class NSNumber;

@interface MTRDoorLockClusterGetWeekDayScheduleResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *weekDayIndex;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *daysMask;
@property (copy, nonatomic) NSNumber *startHour;
@property (copy, nonatomic) NSNumber *startMinute;
@property (copy, nonatomic) NSNumber *endHour;
@property (copy, nonatomic) NSNumber *endMinute;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
