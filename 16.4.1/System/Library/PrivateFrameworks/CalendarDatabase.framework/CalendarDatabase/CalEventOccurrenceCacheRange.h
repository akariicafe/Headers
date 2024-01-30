@class NSTimeZone, NSDate;

@interface CalEventOccurrenceCacheRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;

@end
