@class NSObject;
@protocol OS_dispatch_source;

@interface GKSimpleTimer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_source> *_timerSource;
    double _startTime;
    BOOL _timerSourceSet;
}

@property (nonatomic) id delegate;
@property (readonly, nonatomic) double interval;

- (void)setTimer:(double)a0;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)fireIn:(double)a0 fromNow:(double)a1;

@end
