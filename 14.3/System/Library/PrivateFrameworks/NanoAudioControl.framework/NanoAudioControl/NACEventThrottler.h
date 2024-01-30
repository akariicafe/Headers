@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NACEventThrottler : NSObject {
    double _lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ eventBlock;
@property (nonatomic) double minimumDelay;
@property (retain, nonatomic) id value;

- (void)cancel;
- (void)_fire;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
