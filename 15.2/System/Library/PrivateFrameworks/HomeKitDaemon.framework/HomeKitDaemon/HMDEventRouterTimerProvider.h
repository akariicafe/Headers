@interface HMDEventRouterTimerProvider : NSObject <HMETimerProvider>

- (id)dateWithTimeIntervalSinceNow:(double)a0;
- (id)currentDate;
- (id)timerWithQueue:(id)a0 interval:(double)a1 timerFireHandler:(id /* block */)a2;

@end
