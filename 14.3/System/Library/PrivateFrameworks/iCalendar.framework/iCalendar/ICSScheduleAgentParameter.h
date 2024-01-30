@interface ICSScheduleAgentParameter : ICSPredefinedValue

+ (id)scheduleAgentParameterFromCode:(int)a0;
+ (id)scheduleAgentParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
