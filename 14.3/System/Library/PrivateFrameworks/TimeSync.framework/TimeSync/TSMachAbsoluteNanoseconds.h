@interface TSMachAbsoluteNanoseconds : TSClock {
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
}

+ (id)machAbsoluteNanosecondsClock;

- (id)clockName;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (BOOL)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;

@end
