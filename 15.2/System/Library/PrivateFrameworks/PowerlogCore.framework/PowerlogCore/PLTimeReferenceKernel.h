@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastSystemTimeRecalibrated;
@property (retain) NSDate *lastKernelTimeRecalibrated;
@property BOOL rebootOccurred;

- (void)initializeOffsetWithEntries:(id)a0;
- (double)resolution;
- (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getTimebaseInfo;
- (void)setSystemReboot:(BOOL)a0;
- (void).cxx_destruct;
- (id)currentTime;
- (unsigned long long)continuousTimeToAbsoluteNs:(unsigned long long)a0;

@end
