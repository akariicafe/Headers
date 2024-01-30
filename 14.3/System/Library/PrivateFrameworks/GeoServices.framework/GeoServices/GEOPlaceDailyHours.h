@class NSArray;

@interface GEOPlaceDailyHours : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dayOfWeekRange;
@property (readonly, nonatomic) NSArray *openIntervals;

+ (id)dailyHours:(id)a0 forDays:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)getPlaceDailyHoursForWeekday:(long long)a0 placeDailyHours:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
