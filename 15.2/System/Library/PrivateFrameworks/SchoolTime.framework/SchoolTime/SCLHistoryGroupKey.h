@class NSCalendar, NSDate;

@interface SCLHistoryGroupKey : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *referenceDate;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCalendar:(id)a0 referenceDate:(id)a1;

@end
