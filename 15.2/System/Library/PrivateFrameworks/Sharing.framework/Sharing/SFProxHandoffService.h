@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFProxHandoffService : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    SFService *_service;
    int _serviceState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_serviceStart;
- (void)invalidate;
- (void)_completedWithError:(id)a0;
- (void)dealloc;
- (void)_activated;

@end
