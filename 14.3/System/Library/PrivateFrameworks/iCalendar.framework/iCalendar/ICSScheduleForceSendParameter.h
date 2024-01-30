@interface ICSScheduleForceSendParameter : ICSPredefinedValue

+ (id)scheduleForceSendParameterFromCode:(int)a0;
+ (id)scheduleForceSendParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
