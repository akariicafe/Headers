@class NSString, RMTimedDispatch, NSObject;
@protocol RMDebounceTimerDelegate;

@interface RMDebounceTimer : NSObject {
    NSObject *_lock;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) double minimumInterval;
@property (nonatomic) double maximumInterval;
@property (retain, nonatomic) RMTimedDispatch *minimumTimer;
@property (retain, nonatomic) RMTimedDispatch *maximumTimer;
@property (copy, nonatomic) NSString *lastTimerID;
@property (weak) id<RMDebounceTimerDelegate> delegate;

+ (id)debounceTimerWithMinimumInterval:(double)a0 maximumInterval:(double)a1 delegate:(id)a2 identifier:(id)a3;

- (void)trigger;
- (void)dealloc;
- (void)_timerDidFire;
- (void).cxx_destruct;
- (id)initWithMinimumInterval:(double)a0 maximumInterval:(double)a1 delegate:(id)a2 identifier:(id)a3;

@end
