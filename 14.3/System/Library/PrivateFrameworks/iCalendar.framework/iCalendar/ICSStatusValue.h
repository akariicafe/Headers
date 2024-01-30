@class NSString;

@interface ICSStatusValue : ICSPredefinedValue

@property (retain) NSString *statusString;

+ (id)statusValueFromICSString:(id)a0;
+ (id)statusTypeFromCode:(int)a0 statusString:(id)a1;
+ (id)statusTypeFromCode:(int)a0;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
