@interface ICSBusyStatusValue : ICSPredefinedValue

+ (id)busyStatusTypeFromCode:(int)a0;
+ (id)busyStatusValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
