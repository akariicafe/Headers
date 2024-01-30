@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (BOOL)isRunning;
- (void)start;
- (void).cxx_destruct;
- (double)total;
- (BOOL)wasRunningBefore:(id)a0;
- (double)currentRun;
- (double)stop;

@end
