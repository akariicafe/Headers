@class AFHeartBeat, NSObject;
@protocol OS_dispatch_queue;

@interface _CSSiriQueueObserver : NSObject {
    unsigned long long _numberOfOccurrences;
    AFHeartBeat *_heartBeat;
    NSObject<OS_dispatch_queue> *_queue;
    double _heartBeatInterval;
    double _timeoutInterval;
    id /* block */ _timeoutHandler;
}

- (void)stop;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 heartBeatInterval:(double)a1 timeoutInterval:(double)a2 timeoutHandler:(id /* block */)a3;
- (void)startWithQueue:(id)a0;
- (void)timeoutDetected;
- (void)heartBeatFiredWithQueue:(id)a0;

@end
