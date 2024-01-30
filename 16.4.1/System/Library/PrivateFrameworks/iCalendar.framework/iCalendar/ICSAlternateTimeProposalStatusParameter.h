@interface ICSAlternateTimeProposalStatusParameter : ICSPredefinedValue

+ (id)statusParameterFromCode:(int)a0;
+ (id)statusParameterFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
