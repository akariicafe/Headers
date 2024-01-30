@interface ICSRoleParameter : ICSPredefinedValue

+ (id)roleParameterFromCode:(int)a0;
+ (id)roleParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
