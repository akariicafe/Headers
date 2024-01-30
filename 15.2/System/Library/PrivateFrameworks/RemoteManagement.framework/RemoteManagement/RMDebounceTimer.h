@class RMTimedDispatch, NSString, NSObject;
@protocol RMDebounceTimerDelegate;

@interface RMDebounceTimer : NSObject {
    NSObject *_lock;
}

@property (nonatomic) double minimumInterval;
@property (nonatomic) double maximumInterval;
@property (retain, nonatomic) RMTimedDispatch *minimumTimer;
@property (retain, nonatomic) RMTimedDispatch *maximumTimer;
@property (copy, nonatomic) NSString *lastTimerID;
@property (weak) id<RMDebounceTimerDelegate> delegate;

+ (id)debounceTimerWithMinimumInterval:(double)a0 maximumInterval:(double)a1 delegate:(id)a2;

- (void).cxx_destruct;
- (void)trigger;
- (void)_timerDidFire;
- (id)initWithMinimumInterval:(double)a0 maximumInterval:(double)a1 delegate:(id)a2;

@end
