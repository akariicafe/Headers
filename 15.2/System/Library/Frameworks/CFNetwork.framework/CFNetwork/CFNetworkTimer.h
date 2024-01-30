@class NSObject;
@protocol OS_dispatch_source;

@interface CFNetworkTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
    int _state;
}

- (void)dealloc;

@end
