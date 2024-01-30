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

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void)_serviceStart;
- (void)_completedWithError:(id)a0;
- (void)_activated;
- (void)invalidate;

@end
