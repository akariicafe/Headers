@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface br_pacer : NSObject {
    NSObject<OS_dispatch_source> *source;
    NSObject<OS_dispatch_source> *timer;
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ event_block;
    double last_fire_time;
    double min_fire_interval;
    _Atomic BOOL ever_resumed;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
