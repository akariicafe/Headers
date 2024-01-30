@class NSDate, BSAbsoluteMachTimer, NSObject;
@protocol BSWatchdogProviding, OS_dispatch_queue, BSWatchdogDelegate;

@interface BSWatchdog : NSObject {
    BSAbsoluteMachTimer *_timer;
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

- (void)_watchdogInvalidated;
- (id)initWithTimeout:(double)a0 queue:(id)a1;
- (id)initWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithProvider:(id)a0 queue:(id)a1;
- (id)initWithProvider:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_watchdogTimerFired;
- (void)start;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
