@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent

@property (retain, nonatomic) ICSDate *dtstart;
@property (retain, nonatomic) NSArray *rdate;
@property (retain, nonatomic) NSArray *rrule;
@property (nonatomic) NSArray *tzname;
@property (nonatomic) long long tzoffsetfrom;
@property (nonatomic) long long tzoffsetto;

- (BOOL)validate:(id *)a0;
- (long long)compare:(id)a0;
- (void)addRecurrenceDate:(id)a0;
- (id)computeTimeZoneChangeListFromDate:(id)a0 toDate:(id)a1;

@end
