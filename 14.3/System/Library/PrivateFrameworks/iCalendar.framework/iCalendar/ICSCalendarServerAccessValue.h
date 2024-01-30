@interface ICSCalendarServerAccessValue : ICSPredefinedValue

+ (id)calendarServerAccessFromICSString:(id)a0;
+ (id)calendarServerAccessFromCode:(int)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
