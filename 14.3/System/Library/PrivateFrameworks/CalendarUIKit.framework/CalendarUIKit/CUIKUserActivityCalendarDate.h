@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long view;
@property (readonly, nonatomic) BOOL isTomorrow;

- (id)initWithDate:(id)a0 view:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1 calendar:(id)a2;
- (void)updateActivity:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
