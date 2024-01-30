@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CATDispatchTimer : NSObject <CATResettableTimer> {
    NSString *mIdentifier;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    double mTimeInterval;
    unsigned long long mTotalFires;
    BOOL mFiresForever;
    id /* block */ mFireHandler;
    NSObject<OS_dispatch_source> *mTimerSource;
    unsigned long long mFireCount;
}

+ (id)scheduledTimerWithIdentifier:(id)a0 workQueue:(id)a1 delegateQueue:(id)a2 timeInterval:(double)a3 totalFires:(unsigned long long)a4 firesForever:(BOOL)a5 fireHandler:(id /* block */)a6;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (void)reset;
- (id)initWithIdentifier:(id)a0 workQueue:(id)a1 delegateQueue:(id)a2 timeInterval:(double)a3 totalFires:(unsigned long long)a4 firesForever:(BOOL)a5 fireHandler:(id /* block */)a6;
- (void)timerDidFire;

@end
