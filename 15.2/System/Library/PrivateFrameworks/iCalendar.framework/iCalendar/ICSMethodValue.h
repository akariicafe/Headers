@interface ICSMethodValue : ICSPredefinedValue

+ (id)methodParameterFromCode:(int)a0;
+ (id)methodValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
