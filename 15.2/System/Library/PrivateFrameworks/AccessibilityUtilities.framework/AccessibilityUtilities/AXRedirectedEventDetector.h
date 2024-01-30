@class NSObject, NSMutableArray, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *recentEvents;
@property (retain, nonatomic) AXDispatchTimer *flushEventsTimer;

+ (void)flushEvents;
+ (void)setFlushEventsTimerDelay:(double)a0;

- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_flushEventsIfNecessary;
- (double)_elapsedTimeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)isRedirectedEvent:(id)a0;

@end
