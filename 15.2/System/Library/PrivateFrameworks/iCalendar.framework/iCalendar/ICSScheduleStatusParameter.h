@interface ICSScheduleStatusParameter : ICSPredefinedValue

+ (id)scheduleStatusParameterFromCode:(int)a0;
+ (id)scheduleStatusParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
