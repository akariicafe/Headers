@class NSDate, BSTimer, NSObject;
@protocol BSWatchdogProviding, OS_dispatch_queue, BSWatchdogDelegate;

@interface BSWatchdog : NSObject {
    BSTimer *_timer;
    id /* block */ _completion;
    BOOL _invalidated;
    BOOL _completed;
}

@property (retain, nonatomic) id<BSWatchdogDelegate> delegate;
@property (readonly, nonatomic) id<BSWatchdogProviding> provider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic, getter=hasFired) BOOL fired;

- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 queue:(id)a1;
- (void)dealloc;
- (void)_watchdogInvalidated;
- (id)initWithProvider:(id)a0 queue:(id)a1;
- (void)_watchdogTimerFired;
- (id)description;
- (id)initWithProvider:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)start;
- (id)initWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;

@end
