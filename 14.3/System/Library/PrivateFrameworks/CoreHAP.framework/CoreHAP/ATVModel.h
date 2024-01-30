@class NSDictionary;

@interface ATVModel : NSObject

@property (retain) NSDictionary *atvLUT;

+ (void)addTuple:(id)a0 ToLUT:(id)a1;
+ (unsigned long long)atvStateFromState:(struct BTStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; BOOL x16; BOOL x17; BOOL x18; } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)findTupleForATVState:(unsigned long long)a0;

@end
