@interface ICSCalendarUserParameter : ICSPredefinedValue

+ (id)calendarUserTypeParameterFromCode:(int)a0;
+ (id)calendarUserTypeParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
