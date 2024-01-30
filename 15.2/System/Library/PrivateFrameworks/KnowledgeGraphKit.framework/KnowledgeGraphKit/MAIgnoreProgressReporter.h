@interface MAIgnoreProgressReporter : MAProgressReporter

- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (id)init;
- (BOOL)isCancelled;
- (id)childProgressReporterFromStart:(double)a0 toEnd:(double)a1;
- (id)childProgressReporterForStep:(unsigned long long)a0 outOf:(unsigned long long)a1;

@end
