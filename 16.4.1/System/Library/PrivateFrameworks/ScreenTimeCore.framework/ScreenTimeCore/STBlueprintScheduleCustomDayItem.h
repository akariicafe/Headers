@class NSDateComponents;

@interface STBlueprintScheduleCustomDayItem : NSObject <NSCopying>

@property (retain, nonatomic) NSDateComponents *startTime;
@property (retain, nonatomic) NSDateComponents *endTime;
@property (nonatomic) unsigned long long day;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
