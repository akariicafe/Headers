@class TSIntervalFilter, NSObject;
@protocol OS_dispatch_queue;

@interface TSIntervalTimeLineFilter : TSTimeLineFilter {
    unsigned long long _AAnchor[8];
    unsigned long long _BAnchor[8];
    long long _AEntries[8];
    long long _BEntries[8];
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _validIndex;
    TSIntervalFilter *_aIntervalFilter;
    TSIntervalFilter *_bIntervalFilter;
}

- (void)resetFilter;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (void).cxx_destruct;
- (void)addTimestamps:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct { unsigned long long x0; unsigned long long x1; })rateRatio;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0;
- (BOOL)canConvertTime;
- (id)initWithExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 filterSize:(unsigned char)a2;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 multiIntervalCount:(unsigned int)a2;

@end
