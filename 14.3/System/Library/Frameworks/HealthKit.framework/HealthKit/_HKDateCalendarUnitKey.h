@class NSCalendar, NSDate;

@interface _HKDateCalendarUnitKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) unsigned long long calendarUnit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDate:(id)a0 calendar:(id)a1 unit:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;

@end
