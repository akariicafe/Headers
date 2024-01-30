@class NSCalendar, NSDate;

@interface SCLHistoryGroupKey : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *referenceDate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 referenceDate:(id)a1;

@end
