@class NSString, NSObject;
@protocol OS_dispatch_source, SLGActivatableLogging;

@interface SLGTimedLogger : NSObject <SLGActivatableLogging> {
    id<SLGActivatableLogging> _logger;
    double _duration;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ activationHandler;
@property (copy, nonatomic) id /* block */ deactivationHandler;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_startTimer;
- (void)_stopTimer;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1;
- (BOOL)isEnabled;
- (void)invalidate;
- (id)initWithLogger:(id)a0 duration:(double)a1;

@end
