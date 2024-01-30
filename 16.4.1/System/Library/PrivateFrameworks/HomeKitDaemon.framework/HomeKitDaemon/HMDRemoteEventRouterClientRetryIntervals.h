@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

+ (id)retryIntervalsForResidentClient;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)nextInterval;
- (id)initWithIntervals:(id)a0;

@end
