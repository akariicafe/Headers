@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastSystemTimeRecalibrated;
@property (retain) NSDate *lastKernelTimeRecalibrated;
@property BOOL rebootOccurred;

- (double)resolution;
- (void)initializeOffsetWithEntries:(id)a0;
- (void)setSystemReboot:(BOOL)a0;
- (id)currentTime;
- (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getTimebaseInfo;
- (unsigned long long)continuousTimeToAbsoluteNs:(unsigned long long)a0;
- (void).cxx_destruct;

@end
