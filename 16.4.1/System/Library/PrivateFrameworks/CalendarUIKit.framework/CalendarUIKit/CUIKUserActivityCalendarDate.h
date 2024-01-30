@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long view;
@property (readonly, nonatomic) BOOL isTomorrow;

- (void)updateActivity:(id)a0;
- (id)dictionary;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1 calendar:(id)a2;

@end
