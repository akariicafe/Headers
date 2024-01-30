@class NSObject;
@protocol OS_dispatch_source;

@interface CAMPreciseTimer : NSObject

@property (readonly, copy, nonatomic) id /* block */ _handler;
@property (retain, nonatomic, setter=_setCurrentTimer:) NSObject<OS_dispatch_source> *_currentTimer;
@property (nonatomic, setter=_setFired:) BOOL fired;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double interval;

- (id)initWithDelay:(double)a0 interval:(double)a1 handler:(id /* block */)a2;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;

@end
