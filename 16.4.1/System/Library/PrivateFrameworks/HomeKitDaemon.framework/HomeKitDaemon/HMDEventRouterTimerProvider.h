@interface HMDEventRouterTimerProvider : NSObject <HMETimerProvider>

- (id)currentDate;
- (id)dateWithTimeIntervalSinceNow:(double)a0;
- (id)timerWithQueue:(id)a0 interval:(double)a1 timerFireHandler:(id /* block */)a2;

@end
