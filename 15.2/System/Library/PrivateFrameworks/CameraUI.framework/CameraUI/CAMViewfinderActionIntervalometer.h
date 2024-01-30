@class CAMPreciseTimer, CAMViewfinderViewController;
@protocol CAMViewfinderActionIntervalometerDelegate;

@interface CAMViewfinderActionIntervalometer : NSObject

@property (nonatomic) long long _remaining;
@property (readonly, nonatomic) CAMPreciseTimer *_timer;
@property (readonly, nonatomic) CAMViewfinderViewController *_viewfinderViewController;
@property (copy, nonatomic) id /* block */ _actionBlock;
@property (readonly, weak, nonatomic) id<CAMViewfinderActionIntervalometerDelegate> delegate;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) long long maximumCount;

- (void)startGeneratingRequests;
- (void).cxx_destruct;
- (id)init;
- (void)manuallyGenerateRequest;
- (id)initWithDelegate:(id)a0 interval:(double)a1 delay:(double)a2 maximumCount:(long long)a3 viewfinderViewController:(id)a4 actionBlock:(id /* block */)a5;
- (void)_attemptViewfinderActions;
- (void)_stopAttemptingActions;

@end
