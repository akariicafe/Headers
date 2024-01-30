@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (BOOL)isRunning;
- (BOOL)wasRunningBefore:(id)a0;
- (void).cxx_destruct;
- (double)stop;
- (double)total;
- (double)currentRun;
- (void)start;

@end
