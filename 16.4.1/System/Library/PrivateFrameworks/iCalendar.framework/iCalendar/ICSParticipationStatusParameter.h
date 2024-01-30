@interface ICSParticipationStatusParameter : ICSPredefinedValue

+ (id)participationStatusParameterFromCode:(int)a0;
+ (id)participationStatusParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
