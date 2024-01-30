@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (double)nextInterval;

@end
