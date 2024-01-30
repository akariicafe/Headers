@class HKDateCache, NSDateFormatter;

@interface UTCDateFormatter : NSObject

@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) NSDateFormatter *monthDayYearFormatter;
@property (readonly, nonatomic) NSDateFormatter *shortMonthDayFormatter;
@property (readonly, nonatomic) NSDateFormatter *shortMonthYearFormatter;
@property (readonly, nonatomic) NSDateFormatter *todayFormatter;

- (id)relativeStringFromDate:(id)a0;
- (id)initWithDateCache:(id)a0;
- (void).cxx_destruct;

@end
