@interface ICSTransparencyValue : ICSPredefinedValue

+ (id)transparencyTypeFromCode:(int)a0;
+ (id)transparencyValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
