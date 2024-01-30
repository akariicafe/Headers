@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *mQueue;
    id /* block */ mHandler;
    double mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}

@property (readonly, nonatomic) double valueInterval;

- (id)init;
- (void)dealloc;
- (id)initWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)handleValue:(double)a0 maxValue:(double)a1 isIndeterminate:(BOOL)a2;

@end
