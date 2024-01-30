@class NSString;
@protocol SLGLogging;

@interface SLGActivatableLogger : NSObject <SLGActivatableLogging> {
    id<SLGLogging> _logger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _active;
    id /* block */ _activationHandler;
    id /* block */ _deactivationHandler;
}

@property (copy, nonatomic) id /* block */ activationHandler;
@property (copy, nonatomic) id /* block */ deactivationHandler;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2 completion:(id /* block */)a3;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1 tags:(id /* block */)a2;
- (void)logBlock:(id /* block */)a0 domain:(id)a1;
- (BOOL)isEnabled;
- (void)invalidate;

@end
