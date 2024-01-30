@class NSString;

@interface ICSStatusValue : ICSPredefinedValue

@property (retain) NSString *statusString;

+ (id)statusTypeFromCode:(int)a0;
+ (id)statusTypeFromCode:(int)a0 statusString:(id)a1;
+ (id)statusValueFromICSString:(id)a0;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void).cxx_destruct;

@end
