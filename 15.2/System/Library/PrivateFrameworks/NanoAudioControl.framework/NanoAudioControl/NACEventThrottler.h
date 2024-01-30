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

- (id)initWithQueue:(id)a0;
- (void)_fire;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
