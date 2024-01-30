@interface CDTrendLogic : NSObject

- (id)initWithSlotCount:(unsigned long long)a0 cDelta:(unsigned long long)a1 cLowThreshold:(unsigned long long)a2 cHighThreshold:(unsigned long long)a3 cMin:(unsigned long long)a4 cMax:(unsigned long long)a5 cEpsilon:(unsigned long long)a6 iecMinSeconds:(unsigned long long)a7 iecMaxSeconds:(unsigned long long)a8 iecDecayMult:(unsigned long long)a9 iecMinMult:(unsigned long long)a10 iecAvgMult:(unsigned long long)a11 iecDiv:(unsigned long long)a12 timerMinSeconds:(unsigned long long)a13 timerLeewaySeconds:(unsigned long long)a14 error:(id *)a15;
- (id)initWithTrendLogicBand:(long long)a0 error:(id *)a1;

@end
